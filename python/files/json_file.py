import json

text = {
    "students": [
        {"firstname": "Ilyes", "lastname": "Chakroun", "age": 19, "spec": "IT"},
        {"firstname": "Moez", "lastname": "Chakroun", "age": 19, "spec": "IT"},
        {"firstname": "Safouan", "lastname": "Chakroun", "age": 19, "spec": "IT"}
    ]
}

with open("data.json", "w") as f:
    json.dump(text, f)

with open("data.json", "r") as f:
    text = f.read()
    p = json.loads(text)
    for student in p["students"]:
        print("Name: %s %s, age: %d, spec: %s" % (student["firstname"], student["lastname"], student["age"], student["spec"]))