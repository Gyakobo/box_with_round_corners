import numpy as np
import cv2
from math import *

'''
Note that this is RGB, however, cv2 reads in BGR. I know, it's annoying

General Colors
Beak = (134, 230, 0)

1. (255, 95, 91) 
2. (255, 196, 82) 
3. (88, 255, 90) 
4. (90, 251, 255) 
5. (88, 156, 255) 
6. (235, 67, 255) 
7. (249, 97, 255) 
8. (235, 67, 255) 
9. (255, 58, 172) 
10. (57, 59, 255) 

'''
def BGR_to_RGB(array):
    for i in range(0, len(array)):
        array[i][0], array[i][2] = array[i][2], array[i][0]

    return array

def pixel(array):
    match array.tolist():
        # Beak
        case [134, 230, 0]:
            return "c1"

        # Skin
        case [255, 95, 91]:
            return "c2"
        case [255, 196, 82]:
            return "c2"
        case [88, 255, 90]:
            return "c2"
        case [90, 251, 255]:
            return "c2"
        case [88, 156, 255]:
            return "c2"
        case [235, 67, 255]:
            return "c2"
        case [249, 97, 255]:
            return "c2"
        case [235, 67, 255]:
            return "c2"
        case [255, 58, 172]:
            return "c2"
        case [255, 59, 57]:
            return "c2"

        case _:
            return "c0"
'''
img = cv2.imread('partyParrotsMatrix.bmp', 4)

#print(len(img[0]))

parrot1 = [None]*32
parrot2 = [None]*32
parrot3 = [None]*32
parrot4 = [None]*32
parrot5 = [None]*32
parrot6 = [None]*32
parrot7 = [None]*32
parrot8 = [None]*32
parrot9 = [None]*32
parrot10 = [None]*32

for i in range(0, 32):
    parrot1[i]          = BGR_to_RGB(img[i][0:32])
    parrot2[i]          = BGR_to_RGB(img[i][32:64])
    parrot3[i]          = BGR_to_RGB(img[i][64:96])
    parrot4[i]          = BGR_to_RGB(img[i][96:128])
    parrot5[i]          = BGR_to_RGB(img[i][128:160])
    parrot6[i]          = BGR_to_RGB(img[i][160:192])
    parrot7[i]          = BGR_to_RGB(img[i][192:224])
    parrot8[i]          = BGR_to_RGB(img[i][224:256])
    parrot9[i]          = BGR_to_RGB(img[i][256:288])
    parrot10[i]         = BGR_to_RGB(img[i][288:320])

parrot = [ parrot1, parrot2, parrot3, parrot4, parrot5, parrot6, parrot7, parrot8, parrot9, parrot10 ]

#print(type(parrot1[9][0]))

f = open("file.txt", "w")

f.write("const vector<vector<byte>> parrot1 = {\n")

for k in range(0, 10):
    for i in range(0, 32):
        f.write("{ ")
        for j in range(0, 32):
            if j==31:
                f.write(pixel(parrot[k][i][j]))
            else:
                f.write(pixel(parrot[k][i][j]) + ',')
        if i==31:
            f.write(" }\n")
        else:
            f.write(" },\n")
    f.write("}\n")

f.close()


cv2.imshow('image', img)
cv2.waitKey(0)
cv2.destroyAllWindows()
'''

list = [
    [255, 95, 91],
    [255, 196, 82], 
    [88, 255, 90], 
    [90, 251, 255], 
    [88, 156, 255], 
    [235, 67, 255], 
    [249, 97, 255], 
    [235, 67, 255], 
    [255, 58, 172], 
    [57, 59, 255] 
]

def module(list):
    for i in list:
        mean = sqrt(i[0]**2 + i[1]**2 + i[2]**2)
        i[0] /= mean
        i[1] /= mean
        i[2] /= mean
    return list

list = module(list)
for i in list:
    print(i)
    print('\n')








