from cgitb import text
from tkinter import *

root = Tk()
root.title("Color Palette")

# Non-important functions ####################
def temp_text(e):
    row_dimension.delete(0, "end")
    col_dimension.delete(0, "end")

##############################################

# Get the Row and Column
row_dimension = Entry(root, width = 15, borderwidth=5, text="row")
col_dimension = Entry(root, width = 15, borderwidth=5, text="col")

# Setup the dimensional grid
row_dimension.grid(row=0, column=0, padx=5, pady=5, columnspan=2)
col_dimension.grid(row=0, column=1, padx=5, pady=5, columnspan=2)

button = []

for i in range(4):
    button.append(Button(root, padx=5, pady=5))
    button[i].grid(row=1, column=i)

root.mainloop()

#for i in range()





