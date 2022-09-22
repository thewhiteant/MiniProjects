
dataList = {
    "a":113,
    "b":114,
    "c":120,
    "d":111,
    "e":102,
    "f":115,
    "g":99,
    "h":98,
    "i":106,
    "j":104,
    "k":122,
    "l":100,
    "m":116,
    "n":118,
    "o":109,
    "p":108,
    "q":107,
    "r":103,
    "s":97,
    "t":101,
    "u":112,
    "v":119,
    "w":117,
    "x":105,
    "y":121,
    "z":110 ,

    "!":48,
    '"':39,
    "#":61,
    "$":36,
    "%":51,
    "&":62,
    "'":40,
    "(":59,
    ")":45,
    "*":54,
    "+":60,
    ",":52,
    "-":35,
    ".":32,
    "/":38,
    "0":58,
    "1":53,
    "2":43,
    "3":41,
    "4":47,
    "5":55,
    "6":42,
    "7":37,
    "8":63,
    "9":56,
    ":":49,
    ";":34,
    "<":57,
    "=":64,
    ">":33,
    "?":44,
    "@":50,


    "[":93,
    "\\":95,
    "]":96,
    "^":91,
    "_":94,
    "`":92,

    "{":126,
    "|":124,
    "}":123,
    "~":125,
    " ":46,
}




def encrypto (string):
    res = []
    for i in string.lower():
        if i in dataList:
            res.append(chr(dataList[i]))
        else:
            res.append(i)
    return "".join(res)




