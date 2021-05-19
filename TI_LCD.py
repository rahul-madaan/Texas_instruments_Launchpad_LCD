from PIL import Image

im = Image.open(r"C:\Users\dell\Downloads\pixil-frame-0.png")
px = im.load()

# this for loop prints the code which can be copied to Energia IDE for displaying image on LCD
for i in range(0, 50):
    for j in range(0, 50):
        if (px[i, j]) == (255, 255, 255, 255):
            print("(", i + 1, ",", j + 1, ")")
