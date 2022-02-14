from PIL import Image
from sys import argv

#bmp only

img = Image.open("chong.jpg")
img.save("ok.bmp")
