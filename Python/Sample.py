import urllib
from bs4 import BeautifulSoup

#url = 'http://http://py4e-data.dr-chuck.net/known_by_Johanna.html'
url = raw_input('Enter URL:')
count = int(raw_input('Enter count:'))
position = int(raw_input('Enter position:'))-1
html = urllib.urlopen(url).read()

soup = BeautifulSoup(html,"html.parser")
href = soup('R')
#print href

for i in range(count):
    link = href[position].get('href', None)
    print(href[position].contents[0])
    html = urllib.urlopen(link).read()
    soup = BeautifulSoup(html,"html.parser")
    href = soup('R')