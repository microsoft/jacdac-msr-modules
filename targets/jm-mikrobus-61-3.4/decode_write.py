import sys

SRR = {
    "bits": [15],
    "name":"SRR",
    "description":"status register reset",
    "value_map": {
        "RESET":0x1
    }
}
HBSEL = {
    "bits": [14],
    "name":"HBSEL",
    "description":"channel group select",
    "value_map": {
        "HB":0x1,
        "LB":0x0
    }
}
ULDSC = {
    "bits": [13],
    "name":"ULDSC",
    "description":"Underload Shutdown Control",
    "value_map": {
        "enabled":0x1
    }
}
HBEN12 = {
    "bits": [12],
    "name":"HBEN12/6",
    "description":"half bridge enable",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN11 = {
    "bits": [11],
    "name":"HBEN11/5",
    "description":"half bridge enable",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN10 = {
    "bits": [10],
    "name":"HBEN10/4",
    "description":"half bridge enable",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN9 = {
    "bits": [9],
    "name":"HBEN9/3",
    "description":"half bridge enable",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN8 = {
    "bits": [8],
    "name":"HBEN8/2",
    "description":"half bridge enable",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN7 = {
    "bits": [7],
    "name":"HBEN7/1",
    "description":"half bridge enable",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}

HBCNF12 = {
    "bits": [6],
    "name":"HBCNF12/6",
    "description":"half bridge CNF",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF11 = {
    "bits": [5],
    "name":"HBCNF11/5",
    "description":"half bridge CNF",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF10 = {
    "bits": [4],
    "name":"HBCNF10/4",
    "description":"half bridge CNF",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF9 = {
    "bits": [3],
    "name":"HBCNF9/3",
    "description":"half bridge CNF",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF8 = {
    "bits": [2],
    "name":"HBCNF8/2",
    "description":"half bridge CNF",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF7 = {
    "bits": [1],
    "name":"HBCNF7/1",
    "description":"half bridge CNF",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
OVLO = {
    "bits": [0],
    "name":"OVLO",
    "description":"overvoltage lockout",
    "value_map": {
        "Enabled":0x1
    }
}

bitfields = [SRR, HBSEL, HBEN12, HBEN11, HBEN10, HBEN9, HBEN8, HBEN7, HBCNF12, HBCNF11, HBCNF10, HBCNF9, HBCNF8, HBCNF7, OVLO]



if "0x" in sys.argv[1] or "0X" in sys.argv[1]:
    value = int(sys.argv[1][2:],base=16) 
else:
    value = int(sys.argv[1])

print("hex value: 0x%x" % value)

bitfield_list  = [ 0x4411,0x181,0x4411,0x0201, 0x4411, 0x0401, 0x4411, 0x0201]
# 


for item in bitfield_list:
    value = item
    print(str(value,16) + ": ", sep=None)
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

            print("%s: %s | %s" % (bitfield["name"], bitfield["description"], bitfield_value), sep=None)
        print("\r\n")