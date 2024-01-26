from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time

driver = webdriver.Chrome()

driver.get("https://www.netflix.com/login")

time.sleep(2)

email_field = driver.find_element_by_name("coolkidmakesit@rediffmail.com")
email_field.send_keys("coolkidmakesit@rediffmail.com")
password_field = driver.find_element_by_name("ROHIT@45")
password_field.send_keys("ROHIT@45")

password_field.submit()

time.sleep(2)

if "Netflix" in driver.title:
    print("Login successful!")
else:
    print("Login failed.")

driver.close()
