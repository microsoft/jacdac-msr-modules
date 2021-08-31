import sys

TSD = {
    "bits": [16],
    "name":"TSD",
    "description":"Latched thermal shutdown",
    "value_map": {
        "fault":0x1
    }
}
OCS = {
    "bits": [15],
    "name":"OCS",
    "description":"Overcurrent shutdown",
    "value_map": {
        "fault":0x1
    }
}
PSF = {
    "bits": [14],
    "name":"PSF",
    "description":"VS2/VS1 under/over voltage",
    "value_map": {
        "fault":0x1
    }
}
ULD = {
    "bits": [13],
    "name":"ULD",
    "description":"underload detect",
    "value_map": {
        "fault":0x1
    }
}
HBST12 = {
    "bits": [12,11],
    "name":"HBST12",
    "description":"half bridge output status",
    "value_map": {
        "output_disabled":0,
        "over_current":1,
        "underload_detect":2,
        "output_enabled":3
    }
}
HBST11 ={
    "bits": [10,9],
    "name":"HBST11",
    "description":"half bridge output status",
    "value_map": {
        "output_disabled":0,
        "over_current":1,
        "underload_detect":2,
        "output_enabled":3
    }
}
HBST10 ={
    "bits": [8,7],
    "name":"HBST10",
    "description":"half bridge output status",
    "value_map": {
        "output_disabled":0,
        "over_current":1,
        "underload_detect":2,
        "output_enabled":3
    }
}
HBST9 ={
    "bits": [6,5],
    "name":"HBST9",
    "description":"half bridge output status",
    "value_map": {
        "output_disabled":0,
        "over_current":1,
        "underload_detect":2,
        "output_enabled":3
    }
}
HBST8 ={
    "bits": [4,3],
    "name":"HBST8",
    "description":"half bridge output status",
    "value_map": {
        "output_disabled":0,
        "over_current":1,
        "underload_detect":2,
        "output_enabled":3
    }
}
HBST7 ={
    "bits": [2,1],
    "name":"HBST7",
    "description":"half bridge output status",
    "value_map": {
        "output_disabled":0,
        "over_current":1,
        "underload_detect":2,
        "output_enabled":3
    }
}
TW = {
    "bits": [0],
    "name":"TW",
    "description":"Thermal warning!",
    "value_map": {
        "fault":0x1
    }
}

bitfields = [TSD, OCS, PSF, ULD, HBST12, HBST11, HBST10, HBST9, HBST8, HBST7, TW]


value = int(sys.argv[1])

print("hex value: 0x%x" % value)

for bitfield in bitfields:
    bitmsk = 0x0
    
    shift = 0xff
    for b in bitfield["bits"]:
        bitmsk |= 1 << b
        if b < shift:
            shift = b

    if bitmsk & value:
        t = (value & bitmsk) >> shift

        bitfield_value = ""
        if "value_map" in bitfield.keys():
            for v in bitfield["value_map"]:
                if t == bitfield["value_map"][v]:
                    bitfield_value = v
                    break

        print("%s: %s | %s" % (bitfield["name"], bitfield["description"], bitfield_value))