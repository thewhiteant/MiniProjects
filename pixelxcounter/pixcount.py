
import matplotlib.pyplot as plt
import cv2





fn = input("Open File by name:")
img = cv2.imread(fn)
img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
width, height, chennel = img.shape

count = 0
for w in range(width):
    for h in range(height):
        count += 1
print(f"Total Pixel:{count}\nwidth {width} \nHeight {height}")