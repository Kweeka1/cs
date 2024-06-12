# question (1) - a

# in python a variable is a reference that points to a specific memory location.
# a variables can have different data types that are categorized into 2 groups:
# - primitive data types like: int, float, bool, char...
# - non-primitive data types that are complex structures that use either prmitive data types
#   or non-primitive data types like an array of (int, char...) or an array of arrays
#   common non-primitive data types are: arrays, strings, dictionary, set...

# when you access a variable in python by typing the "variable name", you will get the data that
# variable points to in human readable format.

# you can declare a variable in python like this:
variable_name = 10

# question (1) - b
print(7 * 8)

# question (2) - a
arr = [x for x in range(1, 6)]

# question (2) - b
arr[2]

# question (3)
if 8 % 2 == 0:
    print("Even")
else:
    print("Odd")

# question (4)
for i in range(1, 11):
    print(i)

# question (5) - a
file = open("path_to_file", "r")

# question (5) - b
with open("./data.txt") as f:
    lines = f.read()

# question (6)
import requests
response = requests.get("http.//example.com")

# question (7) - a
# regular expression is a sequence of characters and symbols that define a search pattern for strings.

# question (7) - b
import re
text = "my phone number is 245-830-2243 and his phone number is 114-239-7822"
pattern = r'\d{,3}\-\d{,3}-\d{,4}'
occurrences = re.findall(pattern, text)
print(occurrences)