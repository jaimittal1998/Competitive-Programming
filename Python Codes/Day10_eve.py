class eve:
    def inp(self):
        file=open("evenno.txt","w")
        for i in range(10):
            var=input("enter no.")
            file.write(str(var))
            file.write("\n")
        file.close()
    def out(self):
        file2=open("evenno.txt","r")
        for i in range(10):
            a=file2.readline()
            if((int(a))%2==0):
                print(a)
            else:
                print("not even")
        file2.close()
#obj= eve()  
#obj.inp()
#obj.out()
