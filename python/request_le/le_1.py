import re # module

text = """
    The email addresses are mohsen@gmail.com. mohsenfdhd@gmail.com mohsen14@gmail.com
    Please contact Mr Mohsen at any of the given emails.
    """

email_pattern = r"\b[\w\.]+@[\w]+\.+\w{2,4}\b"
email = re.search(email_pattern, text).group()
print(email)