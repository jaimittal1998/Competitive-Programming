o=0
tw=1
th=o+tw
file=open("fibo.txt","w")
file.write(str(o))
file.write("\n")
file.write(str(tw))
file.write("\n")
for var in range(100):
    file.write(str(th))
    file.write("\n")
    o=tw
    tw=th
    th=o+tw
file.close()
    
