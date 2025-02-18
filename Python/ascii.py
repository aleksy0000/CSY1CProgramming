i = 0
line = 1
size = 4

while line <= size:
    line = line + 1
    j = 0
    while j <= (size-line):
        print("\s")
        j = j + 1
    if line != 1:
        j = 0
        while j <= (2 * line - 1):
            print("*")
            j = j + 1
    else:
        print("*")


    