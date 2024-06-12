import os
print(os.getcwd())
# f = open("file.txt", "w")
# f.write("Hello world")
# f.close()

with open("./file.txt", "w") as f:
    f.write("Hello world!\n")

with open("./file.txt") as f:
    print(f.read())

with open("./file.txt", "a") as f:
    f.write("Second line!\n")

with open("./file.txt") as f:
    print(f.read())