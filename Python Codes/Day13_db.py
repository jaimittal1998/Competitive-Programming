import mysql.connector
mydb=mysql.connector.connect(host="localhost",user="root",password="",database="newdb")
mycursor=mydb.cursor()
#mycursor.execute("create table rollcall(name varchar(40),UID int PRIMARY KEY NOT NULL AUTO_INCREMENT,normal varchar(20))")
'''for var in range(5):
    c="insert into rollcall values(%s,%s,%s)"
    d=(input("enter name"),"", input("enter random"))
    mycursor.execute(c,d)'''
mycursor.select * from rollcall()    
mydb.commit()    
