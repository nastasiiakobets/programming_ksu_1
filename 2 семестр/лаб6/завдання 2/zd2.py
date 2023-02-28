            #main

import m2

print("1 - enter the list from the keyboard")
print("2 - fill the list using random")
print("0 - end")
k=int(input('select a number: '))

if k==1: 
       b=m2.enter()
       m2.menu()
       while k!=0:
           k=int(input("enter the number of tasks: "))
           if k==3:
             m2.inputt(b)  
           elif k==4:
             m2.znach(b)   
           elif k==5:
             m2.max(b)
           elif k==6:
             m2.sort(b)
           elif k==7:
             m2.average(b)
           elif k!=0 and k!=[3,4,5,6,7]:
             print('error')
       print('     end')

elif k==2:
       
       b=m2.rand()
       m2.menu()
       while k!=0:
           k=int(input("enter the number of tasks: "))
           if k==3:
             m2.inputt(b)  
           elif k==4:
             m2.znach(b)   
           elif k==5:
             m2.max(b)
           elif k==6:
             m2.sort(b)
           elif k==7:
             m2.average(b)
           elif k!=0 and k!=[3,4,5,6,7]:
             print('error')
       print('end')
