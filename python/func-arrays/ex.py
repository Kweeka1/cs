def get_student():
    name = input("Name: ")
    score = float(input("Score: "))
    return {"name": name, "score": score}

def load_students():
    students = []
    for _ in range(3):
        students.append(get_student())

    return students

def sort_by_score(students):
    for i in range(len(students)):
        for j in range(len(students) - i - 1):
            if students[j]["score"] < students[j + 1]["score"]:
                students[j], students[j + 1] = students[j + 1], students[j]

    return students

stds = load_students()
print(sort_by_score(stds))