import datetime as dt

x = dt.datetime.now()
print(x)
y = dt.datetime(2020, 10, 15)
print(y)
print(x.strftime("%d/%m/%Y %H:%M:%S"))
print(x.strftime("%b %d %H:%M"))

print("I'm", (x - y) // dt.timedelta(), "years old")
xy = x.year
yy = y.year
print(f"I'm {xy - yy} years old") # not accurate