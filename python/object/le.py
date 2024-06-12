class Student:
    def __init__(self, name, age, spec):
        self.name = name
        self.age = age
        self.spec = spec

    def myfunc(self):
        print("Hello", self.name)

i1 = Student("Zakaria", 23, "IT student")
print(i1.name)
i1.myfunc()