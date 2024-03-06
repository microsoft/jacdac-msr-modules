const fs = require("fs")

const byfile = {}

function lines(fn) {
    return fs.readFileSync(fn, "utf-8").split(/\r?\n/)
}

for (const ln of lines("pldi24/srcsizes.txt")) {
    if (!ln) continue
    const m = /^\s*(\d+)\s+\d+\s+(\d+)\s+(.*)/.exec(ln)
    const numLines = parseInt(m[1])
    const numBytes = parseInt(m[2])
    const filename = m[3]
    byfile[filename] = {
        lines: numLines,
        bytes: numBytes
    }
}

for (const ln of lines("pldi24/binsizes.txt").slice(1)) {
    if (!ln) continue
    const m = /^\s*(\d+)\s+(\d+)\s+\d+\s+\d+\s+[a-f\d+]+\s+(.*)/.exec(ln)
    const text = parseInt(m[1])
    const data = parseInt(m[2])
    const size = text + data

    if (!size)
        continue

    const filename = m[3].replace(/.*\/app\//, "").replace(/\.o$/, ".c")

    if (/jd\/prof-/.test(filename))
        continue
    const ent = byfile[filename]
    if (ent.flash) {
        ent.flash_max = Math.max(ent.flash_max, size)
        ent.flash_min = Math.max(ent.flash_min, size)
    } else {
        ent.flash_min = size
        ent.flash_max = size
    }
}

const services = [
    { service: "button", kind: "UX-in"},
    { service: "potentiometer",  kind: "UX-in"},
    { service: "rotary encoder", kind: "UX-in"},
    { service: "switch", kind: "UX-in"},
    //
    { service: "accelerometer",  kind: "sensor"},
    { service: "air pressure",  kind: "sensor"},
    // { service: "color",  kind: "sensor"},
    // { service: "eCO2",  kind: "sensor"},
    { service: "flex",  kind: "sensor"},
    { service: "humidity",  kind: "sensor"},
    { service: "illuminance",  kind: "sensor"},
    { service: "light level",  kind: "sensor"},
    { service: "motion",  kind: "sensor"},
    { service: "soil moisture",  kind: "sensor"},
    { service: "temperature",  kind: "sensor"},
    { service: "TVOC",  kind: "sensor"},
    { service: "UV index",  kind: "sensor"},
    //
    { service: "motor", kind: "actuator"},
    { service:  "relay", kind: "actuator"},
    { service:  "servo", kind: "actuator"},
    //
    { service: "buzzer", kind: "UX-out"},
    { service: "dot matrix",  kind: "UX-out"},
    { service: "LED display",  kind: "UX-out", realService: "led"},
    { service: "Vibration motor",  kind: "UX-out"},
]

const cmap = {
    airpressure: "barometer",
    lightlevel: "analogsensor",
    soilmoisture: "analogsensor",
    potentiometer: "analogsensor",
}

const drivers = {
    "ads1115": "Analog-to-digital converter",
    //
    "kx023": "Accelerometer",
    "kxtj3": "Accelerometer",
    "qma7981": "Accelerometer",
    "lsm6ds": "Accelerometer + gyroscope",
    //
    "cps122": "Air pressure",
    "lps33hwtr": "Air pressure",
    "mpl3115a2": "Air pressure",
    // 
    "sht30": "Temperature and humidity sensor",
    "shtc3": "Temperature and humidity sensor",
    "th02": "Temperature and humidity sensor",
    //
    "ds18b20": "Temperature probe",
    "max31855": "Thermocouple interface",
    "max6675": "Thermocouple interface",
    //
    "aw86224fcr": "Vibration motor controller",
    "ltr390uv": "Visible + UV light sensor",
    "sgpc3": "TVOC (air quality) sensor",
    // "cap1298": "Capacitive touch controller",
    // "mcp41010": "Digital potentiometer",
    // "ncv7726b_daisy": "12 channel H-bridge driver",
    // "spiflash": "NOR flash connected over SPI",
}

for (const fn of Object.keys(byfile)) {
    const ent = byfile[fn]
    if (ent.flash_max)
        ent.flash_variance = (ent.flash_max - ent.flash_min) / ent.flash_max
}

const specs = JSON.parse(fs.readFileSync("pldi24/services.json", "utf-8"))

let tableout = []

function printcsv(arr) {
    for (let i = 0; i < arr.length; ++i)
        arr[i] = (arr[i] ?? "") + ""
    tableout.push(arr)
}

function pad(word, len) {
    word = word + ""
    while (word.length < len)
        word = " " + word
    return word
}

function servicesTable() {
    printcsv(["service", "kind", "rw", "ro", "const", "cmds", "events", "LOC", "flash", ])

    for (const s of services) {
        let base = s.service.toLowerCase().replace(/ /g, "")
        const cfile = "jacdac-c/services/" + (cmap[base] ?? base) + ".c"
        const ent = byfile[cfile]
        if (s.realService) {
            base = s.realService
        }
        const spec = specs.find(s => s.shortId == base)

        const counts = {}
        let name = spec.name
        if (spec.shortId == "tvoc") name = "TVOC" // too long

        for (const pkt of spec.packets) {
            if (pkt.derived) continue
            if (!counts[pkt.kind]) counts[pkt.kind] = 1
            else counts[pkt.kind]++
        }

        printcsv([name, s.kind, counts["rw"], counts["ro"], counts["const"], counts["command"], counts["event"], ent?.lines, ent?.flash_max])
    }
}

function driversTable() {
    printcsv(["name", "description", "C lines", "flash"])

    for (const s of Object.keys(drivers)) {
        const id = s.replace(/_daisy/, "").toUpperCase()
        const cfile = "jacdac-c/drivers/" + s + ".c"
        const ent = byfile[cfile]
        printcsv([id, drivers[s], ent?.lines, ent?.flash_max])
    }
}

function printTable(basename, fn) {
    tableout = []
    fn()

    const tablelens = []
    for (const arr of tableout) {
        for (let i = 0; i < arr.length; ++i) {
            const word = (arr[i] ?? "") + ""
            tablelens[i] = Math.max(tablelens[i] || 0, word.length)
        }
    }

    let csv = ""
    let latex = ""
    for (const arr of tableout) {
        csv += arr.map(s => /[,;]/.test(s) ? `"${s}"` : s).join(",") + "\n"
        latex += arr.map((w, i) => pad(w, tablelens[i])).join(" &") + " \\\\ \n"
    }

    fs.writeFileSync("pldi24_out/" + basename + ".csv", csv)
    fs.writeFileSync("pldi24_out/" + basename + ".tex", latex)
    console.log(basename + "\n" + latex + "\n")
}

try { fs.mkdirSync("pldi24_out") } catch { }

printTable("services", servicesTable)
printTable("drivers", driversTable)

