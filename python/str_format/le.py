txt = f"Good morning"
std = "yosra"
age = 20
txt = f"{txt} {std}"
print(txt)
prod = "shampoo"
price = 5.0
print(f"Price: {price:.3f}")
txt = f"The price of {prod} is {'exp' if price > 10 else 'cheap'}"
print(txt)
print(f"name: {std.upper()}")
message = "The student {} is {} years old"
print(message.format(std, age))