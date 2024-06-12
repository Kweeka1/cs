for i in range(2):
    print(i)

print("------------")
for i in range(5, 10):
    print(i)

# last arg is step
print("------------")
for i in range(6, 10, 2):
    print(i)

print("------------")
for x in "ramez":
    print(x)

print("------------")
std = ["Ramez", "Sajed", "Med Ali"]

for x in std:
    print(x)

print("------------")
for i in range(5):
    print(i)
    if i == 3:
        break
    else:
        print("end of loop")