import urllib
from bs4 import BeautifulSoup

#url = 'http://http://py4e-data.dr-chuck.net/known_by_Johanna.html'
url = raw_input('Enter URL:')
count = int(raw_input('Enter count:'))
position = int(raw_input('Enter position:'))-1
html = urllib.urlopen(url).read()

soup = BeautifulSoup(html,"html.parser")
href = soup('a')
#print href

