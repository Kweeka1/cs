# Identity operators
# x = int(input("Enter a number: "))
# y = int(input("Enter a second number: "))
# "is" is used to check if two variables are pointing to the same object

class A:
    def __init__(self, x):
        self.x = x

    def __eq__(self, value: object) -> bool:
        return self.x == value.x

w = A(2)
q = A(2)
print(hash(w))
print(hash(q))
print(f"{w == q = }")
print(f"{w is q = }")
print(f"{w is w = }")
# print(f"{x is y = }")
# print(f"{x is not y = }")