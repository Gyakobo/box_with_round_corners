from sample_button import _Button 
from tkinter import *
import sys

root = Tk()

# Save file #########################
folder = 'output_files/'

def save():
    file = open(folder + sys.argv[1], 'w')

    rgb_colors = [None] * 1024

    for i in buttons:
        tupple = i.output_pixel()
        rgb_colors[ (tupple[0]*32) + tupple[1] ] = tupple[2]

    start = 'const vector<vector<two_bits>> parrot1 = {\n'
    end = '}\n'

    colors  = {'':'c0'}
    index   = 1 

    # Start writing
    file.write(start)

    row = '{'

    for i in range(32):
        row = '{'
        for j in range(32):
            if rgb_colors[(i*32) + j] not in colors:
                colors[rgb_colors[(i*32) + j]] = 'c' + str(index)  
                index += 1

            if j != 31: 
                row += colors[rgb_colors[(i*32) + j]] + ','
            else:
                row += colors[rgb_colors[(i*32) + j]] + '},'
        file.write(row + '\n')

    print(colors)

    # Stop writing
    file.write(end)

    file.close()
#####################################

e = Entry(root, width=50) # fg='pink'
e.grid(row=0, column=0, columnspan=31)

output_button = Button(root, text='Save', command=save)
output_button.grid(row=0, column=29, columnspan=3)

buttons = [None] * 1024

for i in range(32):
    for j in range(32):
        buttons[(i*32) + j] = _Button(root, i, j, e)

root.mainloop()