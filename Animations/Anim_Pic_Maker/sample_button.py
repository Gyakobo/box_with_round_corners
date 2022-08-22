from tkinter import *

class _Button:
    def __init__(self, root, row, col, color):
        self.root       = root
        self.row        = row    
        self.col        = col
        self.color      = color
        self.rgb        = ''

        # Background: #3b3b3b
        self.button = Button(self.root, command=self.change_color, bg = '#3b3b3b')
        self.button.grid(row=row+1, column=col)


    def change_color(self):
        if self.color.get() != self.rgb:
            self.rgb    = self.color.get()
            self.button.configure(bg=self.rgb)
        else:
            self.rgb = ''
            self.button.configure(bg='#3b3b3b')

    def output_pixel(self):
        return ( self.row, self.col, self.rgb ) 
