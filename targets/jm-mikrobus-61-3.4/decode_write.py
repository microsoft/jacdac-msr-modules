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
    "name":"HBEN12",
    "description":"half bridge enable",
    "sch_name":"ROW3",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN11 = {
    "bits": [11],
    "name":"HBEN11",
    "description":"half bridge enable",
    "sch_name":"ROW2",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN10 = {
    "bits": [10],
    "name":"HBEN10",
    "description":"half bridge enable",
    "sch_name":"ROW1",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN9 = {
    "bits": [9],
    "name":"HBEN9",
    "description":"half bridge enable",
    "sch_name":"ROW0",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN8 = {
    "bits": [8],
    "name":"HBEN8",
    "description":"half bridge enable",
    "sch_name":"COL8",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN7 = {
    "bits": [7],
    "name":"HBEN7",
    "description":"half bridge enable",
    "sch_name":"COL7",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}

HBCNF12 = {
    "bits": [6],
    "name":"HBCNF12",
    "description":"half bridge CNF",
    "sch_name":"ROW3",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF11 = {
    "bits": [5],
    "name":"HBCNF11",
    "description":"half bridge CNF",
    "sch_name":"ROW2",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF10 = {
    "bits": [4],
    "name":"HBCNF10",
    "description":"half bridge CNF",
    "sch_name":"ROW1",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF9 = {
    "bits": [3],
    "name":"HBCNF9",
    "description":"half bridge CNF",
    "sch_name":"ROW0",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF8 = {
    "bits": [2],
    "name":"HBCNF8",
    "description":"half bridge CNF",
    "sch_name":"COL7",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF7 = {
    "bits": [1],
    "name":"HBCNF7",
    "description":"half bridge CNF",
    "sch_name":"COL6",
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
HBEN6 = {
    "bits": [12],
    "name":"HBEN6",
    "description":"half bridge enable",
    "sch_name":"COL5",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN5 = {
    "bits": [11],
    "name":"HBEN5",
    "description":"half bridge enable",
    "sch_name":"COL4",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN4 = {
    "bits": [10],
    "name":"HBEN4",
    "description":"half bridge enable",
    "sch_name":"COL3",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN3 = {
    "bits": [9],
    "name":"HBEN3",
    "description":"half bridge enable",
    "sch_name":"COL2",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN2 = {
    "bits": [8],
    "name":"HBEN2",
    "description":"half bridge enable",
    "sch_name":"COL1",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}
HBEN1 = {
    "bits": [7],
    "name":"HBEN1",
    "description":"half bridge enable",
    "sch_name":"COL0",
    "value_map": {
        "HIGHZ":0,
        "ENABLED":1
    }
}

HBCNF6 = {
    "bits": [6],
    "name":"HBCNF6",
    "description":"half bridge CNF",
    "sch_name":"COL5",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF5 = {
    "bits": [5],
    "name":"HBCNF5",
    "description":"half bridge CNF",
    "sch_name":"COL4",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF4 = {
    "bits": [4],
    "name":"HBCNF4",
    "description":"half bridge CNF",
    "sch_name":"COL3",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF3 = {
    "bits": [3],
    "name":"HBCNF3",
    "description":"half bridge CNF",
    "sch_name":"COL2",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF2 = {
    "bits": [2],
    "name":"HBCNF2",
    "description":"half bridge CNF",
    "sch_name":"COL1",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}
HBCNF1 = {
    "bits": [1],
    "name":"HBCNF1",
    "description":"half bridge CNF",
    "sch_name":"COL0",
    "value_map": {
        "LS ON":0,
        "HS ON":1
    }
}

hbsel_bitfields = [SRR, HBSEL, ULDSC, HBEN12, HBEN11, HBEN10, HBEN9, HBEN8, HBEN7, HBCNF12, HBCNF11, HBCNF10, HBCNF9, HBCNF8, HBCNF7, OVLO]
u_hbsel_bitfields = [SRR, HBSEL, ULDSC, HBEN6, HBEN5, HBEN4, HBEN3, HBEN2, HBEN1, HBCNF6, HBCNF5, HBCNF4, HBCNF3, HBCNF2, HBCNF1, OVLO]


def print_bits(value, bitfield_list):
    for bitfield in bitfield_list:
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
            # print("[%s: %s | %s], " % (bitfield["name"], bitfield["description"], bitfield_value), end="")
            if "sch_name" in bitfield.keys():
                if len(bitfield) == 0:
                    print("| %s[%s] " % (bitfield["sch_name"], bitfield["name"]), end="")
                else: 
                    print("| %s[%s] " % (bitfield["sch_name"], bitfield_value), end="")
            else:
                print("| %s " % (bitfield["name"]), end="")
    print("")

if "0x" in sys.argv[1] or "0X" in sys.argv[1]:
    value = int(sys.argv[1][2:],base=16) 
else:
    value = int(sys.argv[1])

print("hex value: 0x%x" % value)
#                   0           1              2                3               4               5       6
# bitfield_list  = [ 0x4411,0x181,0x4411,0x0201, 0x4411, 0x0401, 0x4411, 0x0801, 0x4411, 0x1001, 0x4491,0x4511]
# bitfield_list  = [0x4201, 0x209, 0x4209, 0x201]#, 0x4201, 0x209, 0x4001, 0x1, 0x4209,0x201]

bitfield_list = [0x4208, 0x1000 ] #, 0xc001, 0x4821, 0x0201, 0xc001,0x4821,0x0401,0xc001,0x4821,0x0801,0xc001, 0x4821,0x1001,0xc001,0x48a1, 0xc001, 0x4921,0xc001]
# bitfield_list = [0x4209,0x201]
# bitfield_list = [0x5e09,0x81]
# bitfield_list = [0x5e69,0x1041]

for item in bitfield_list:
    value = item
    print("0x%x: " % value, end="")

    bitfields = u_hbsel_bitfields

    if value & (1 << HBSEL["bits"][0]):
        bitfields = hbsel_bitfields

    print_bits(value, bitfields)