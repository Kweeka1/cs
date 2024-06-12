import requests as req
import re
# from bs4 import BeautifulSoup as bs
#url universal resource locator

urls = [
    "url_1",
    "url_2",
    "url_3",
]

email_set = set()
email_pattern = r"\b[a-z\.\w|\w\.]+@[a-z]+\.+(([a-z]{2,4}+\.+[a-z]{2,4})|([a-z]{2,4}))\b"
email_pattern2 = r"\b[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}\b"

for url in urls:
    page = req.get(url)
    emails = re.findall(email_pattern2, page.text)
    for email in emails:
        email_set.add(email)

print(list(email_set))
# print(bs(page.content).prettify())
