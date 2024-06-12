import requests as req
import re
import json

url_pattern = r'https?://(?:www\.)?[a-zA-Z0-9./]+'
prd_name_pattern = r'\"productTitle\":\"[^\"]*\"'
prd_price_pattern = r'\"minPrice\":\"[^\"]*\"'

url = "https://www.aliexpress.com"

def get_page_as_text(url):
    return req.get(url).text

def get_products_titles(page_text, product_title_pattern):
    return re.findall(product_title_pattern, page_text)

def get_products_prices(page_text, price_pattern):
    prices = re.findall(price_pattern, page_text)
    return [float(json.loads(f'{{{price}}}')["minPrice"].replace("TND", "").strip()) for price in prices]

def get_urls(page_text):
    return re.findall(url_pattern, page_text)

content = get_page_as_text(url)
products = get_products_titles(content, prd_name_pattern)
prices = get_products_prices(content, prd_price_pattern)
urls = get_urls(content)

with open("./products4.json", "w") as fjson:
    list_product = []
    for i in range(len(products)):
        json_string = '{' + products[i] + '}'
        deserialized = json.loads(json_string)
        deserialized["price"] = prices[i]
        list_product.append(deserialized)

    json.dump(list_product, fjson)

with open("./urls.txt", "w") as f:
    for url in urls:
        f.write(url + '\n')
