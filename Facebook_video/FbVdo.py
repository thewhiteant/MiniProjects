import re
import requests
import urllib.request

url = "https://www.facebook.com/nafisahmed21.saon/videos/2288054971334988"
html = requests.get(url)

try :
    urlx = re.search('hd_src:"(.+?)"',html.text)[1]

except:
    urlx = re.search('sd_src:"(.+?)"',html.text)[1]


urllib.request.urlretrieve(urlx,"test.mp4")