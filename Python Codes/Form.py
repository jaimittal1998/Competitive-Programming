import tkinter
from tkinter import *
from tkinter import messagebox
import mysql.connector
mydb=mysql.connector.connect(host="localhost",user="root",password="",database="mynewdb")
mycursor=mydb.cursor()
def func():
    '''messagebox.showinfo("EK TEXT","HELLO")
    messagebox.showerror("DESH SANKAT ME HAI","GALAT HAI")
    messagebox.showwarning("25 DIN HAI BACHALO AONE SHEHER KO","HELLO")
    global var4,var5,var6,var7,var8
    var4=i.get()
    print (var4)
    var5=j.get()
    print (var5)
    var6=k.get()
    print (var6)
    var7=l.get()
    print (var7)
    var8=b.get()
    print (var8)'''
    var9=d.get()
    mycursor.execute("delete from form where name='%s'"%var9)
    printval=StringVar()
    printval.set(var9)
    var12=Label(var,textvariable=printval)
    var12.pack()
    var12.place(x=45,y=300)
    tableval=(i.get(),j.get(),k.get(),l.get(),b.get(),c.get(),"")
    var10="insert form values(%s,%s,%s,%s,%s,%s,%s)"
    var11=tableval
    mycursor.execute(var10,var11)
    messagebox.showinfo("FORM BHAR GYA","ALL DONE")
    mycursor.execute("select * from form")
    for form in mycursor:
        print(form)
var=tkinter.Tk()
a=StringVar()
a.set('''Name:
Ph.No.:
Address:
Email:
Qualification:
Age:
Field to delete''')
var1=Label(var,textvariable=a)
var1.pack()
var1.place(x=0,y=30)#x and y axis have been set for the text
var.geometry("640x480+300+300")

#textbox
i=tkinter.Entry(var)
i.pack()
i.place(x=100,y=30)
j=tkinter.Entry(var)
j.pack()
j.place(x=100,y=50)
k=tkinter.Entry(var)
k.pack()
k.place(x=100,y=70)
l=tkinter.Entry(var)
l.pack()
l.place(x=100,y=90)
b=tkinter.Entry(var)
b.pack()
b.place(x=100,y=110)
c=tkinter.Entry(var)
c.pack()
c.place(x=100,y=130)
d=tkinter.Entry(var)
d.pack()
d.place(x=100,y=150)
#BUTTON
var2=tkinter.Button(var,text="SUBMIT",bd=10,bg="grey",command=func)
var2.pack()
var2.place(x=80,y=190)
#LIST
var10=[11,8,1998,12,12,1972,13,"0ct",1995]
var11=StringVar()
var11.set(var10[0])#means starting from 0 index
var12=OptionMenu(var,var11,*var10)#(obj oftkinter,Stringvar variable,list name)
var12.pack()
var12.place(x=130,y=250)
var.mainloop()
