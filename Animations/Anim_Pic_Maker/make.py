from tkinter import *

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
e.pack()
#e.get()
#e.insert(0, 'Enter Your Color: ')

def myClick():
    myLabel = Label(root, text = e.get())
    myLabel.pack()

myButton = Button(root, text="Click Me!", command=myClick, bg='blue')
myButton.pack()


root.mainloop()


# Get to know what State Holders are
