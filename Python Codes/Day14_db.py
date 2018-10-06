import mysql.connector
mydb=mysql.connector.connect(host="localhost",user="root",password="",database="newdb")
mycursor=mydb.cursor()
#mycursor.execute("create table employee(name varchar(40),Employee_ID int PRIMARY KEY NOT NULL AUTO_INCREMENT,Department varchar(25),working_hrs int,designation varchar(35),PhNo int,EmailId varchar(35),Address varchar(35))")
'''for var in range(3):
    c="insert into employee values(%s,%s,%s,%s,%s,%s,%s,%s)"
    d=(input("enter name"),"", input("enter dept."),int(input("working hrs")),input("designation"),input("Ph.No."),input("EmailId"),input("Address"))
    mycursor.execute(c,d)'''
mycursor.execute("select * from employee where designation='senior'")
for employee in mycursor:
    print(employee)
mydb.commit()
