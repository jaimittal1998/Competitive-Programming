var=open("newfile.txt","w")
for a in range(5):
    var.write(input("enter number"))
    var.write("\n")
var.close()
var2=open("newfile.txt","r")
for c in range(1,6):
    a=int(var2.readline())
    c=0
    for b in range(1,a+1):
        if(a%b==0):
            c=c+1
    if(c==2):
            print("prime",a)
var2.close()
