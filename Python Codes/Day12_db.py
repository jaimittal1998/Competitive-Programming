import mysql.connector
mydb=mysql.connector.connect(host="localhost",user="root",password="",database="newdb")
mycursor=mydb.cursor()
#mycursor.execute("create database newdb")
#mycursor.execute("create table tbl(name varchar(40),rollno int,address varchar(50),percent int)")
a="insert into tbl values(%s,%s,%s,%s)"
b=("Shriyesh Chandra",401703027,"indira nagar lko",94.25)
#mycursor.execute(a,b)
'''for var in range(5):
    c="insert into tbl values(%s,%s,%s,%s,%s)"
    d=(input("enter name"),int(input("enter roll.")),input("address"),int(input("percentage?")),int(input("enter UID")))
    mycursor.execute(c,d)
e=input("row to delete")
f=input("enter field")
q="delete from tbl where %s=%s"
mycursor.execute(q,e,f)'''#commented deletion is an error here
'''q="delete from tbl where name=%s"
todel=(input("enter name to delete"))
mycursor.execute(q,(todel,))
x=input("enter val to delete")
mycursor.execute("delete from tbl where name='%s'"%x)
n1=input("enter name to be changed")
n2=input("enter address to be changed")
n=(n2,n1)
up="update tbl set name=%s where name=%s"
mycursor.execute(up,n)'''#correct syntaxes
mycursor.execute("ALTER table tbl ADD UID int AUTO INCREMENT NOT NULL PRIMARY KEY")
mydb.commit()
