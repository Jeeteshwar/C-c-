from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time

# Function to automate Amazon.in search
def search_amazon(product):
    # Create an instance of Chrome WebDriver
    driver = webdriver.Chrome()

    # Navigate to Amazon.in homepage
    driver.get('https://www.amazon.in')

    # Wait for page to load
    time.sleep(2)

    # Find search bar and enter search query
    search_bar = driver.find_element_by_name('Search amazon.in')
    search_bar.send_keys(product)
    search_bar.send_keys(Keys.RETURN)

    # Wait for search results to load
    time.sleep(2)

    # Check if search was successful
    if 'Amazon.in : ' + product in driver.title:
        print(f'Search results for "{product}" displayed successfully!')
    else:
        print(f'Search failed for "{product}".')

    # Close the browser
    driver.close()

# Call the function with the product name you want to search
search_amazon('laptop')
