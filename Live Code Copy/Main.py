while True:

    mainFIle = open("file1.py")
    x = mainFIle.read()
    cpra = open("Copy.py", "r")
    yx = cpra.read()
    cpra.close()
    if x != yx:
        cpFile = open("Copy.py", "w+")
        cpFile.write(x)

