while True:
    with open("file1.py") as mainFIle:
        x = mainFIle.read()
    cpra = open("Copy.py", "r")
    yx = cpra.read()
    cpra.close()
    if x != yx:
        with open("Copy.py", "w+") as cpFile:
            cpFile.write(x)

