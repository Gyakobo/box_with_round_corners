from tkinter import *
from sample_button import *

root = Tk()

'''
# Create a Label widget
myLabel1 = Label(root, text='Hello World!')
myLabel2 = Label(root, text='Yo I\'m Andrew!')

# Shoving it onto the screen
myLabel1.grid(row=0, column=0) 
myLabel2.grid(row=1, column=1) 

myButton = Button(root, text="Click Me!", command=myClick, fg='blue') #fg - font_color, #fb - background_color
'''

e = Entry(root, width=50, fg='pink')
e.grid(row=0, column=0, columnspan=32)
#e.get()
#e.insert(0, 'Enter Your Color: ')

def changeColor(index):
    '''
    myLabel = Label(root, text = e.get())
    myLabel.pack()
    '''
    # row = myButton[index].grid_info()['row']
    # col = myButton[index].grid_info()['col']
    # myButton[index].configure(bg="red")


# myButton = Button(root, text="Click Me!", command=myClick, bg='blue')
# myButton.pack()

myButton = [None] * 1024 

for i in range(32):
    for j in range(32):
        myButton[(i*32) + j] = Button(root, command=lambda: changeColor((i*32) + j))
        myButton[(i*32) + j].grid(row=i+1, column=j)


root.mainloop()


# Get to know what State Holders are
