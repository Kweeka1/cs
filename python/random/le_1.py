import random
import mod

k = mod.f()

mylist = ["hamadi", "mokhtar", "mohsen", "el3ou9", "ghassan"]

print(random.choice(mylist))
print(random.choices(mylist, weights=[5, 1, 1, 1, 1], k=2))
print(random.randrange(1, 20))
random.seed(5)