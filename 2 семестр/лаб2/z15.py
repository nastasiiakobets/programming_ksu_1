'''15. Дано координати (x; y) точки і радіус кола (r). 
Визначити чи належить дана точка колі, якщо його центр знаходиться на початку координат.'''

print('enter (x; y) and r')
x=int(input())
y=int(input())
r=float(input())

if x**2+y**2<=r**2:
    print('yes')
else:
    print('no')