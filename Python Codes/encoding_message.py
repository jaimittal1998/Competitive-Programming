var1=input();
c=0;
while(c!=var1):
    n1=input();
    s1=input();
    c=c+1;
    for var in range(0,n1-1,2):
        s1[var]=97+122-s1[var];
        s1[var+1]=97+122-s1[var+1];
        temp=s1[var]
        s1[var]=s1[var+1]
        s1[var+1]=temp
    print(s1)
    
    
        
