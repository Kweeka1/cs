# logical operators
x = bool(int(input("Enter a number (1 or 0): ")))
y = bool(int(input("Enter a second number (1 or 0): ")))

print(f"{x and y = }")
print(f"{x and not y = }")
print(f"{not x and y = }")
print(f"{not x and not y = }")
print(f"{not x = }")
print(f"{not y = }")
print(f"{x or y = }")
print(f"{x ^ y = }")