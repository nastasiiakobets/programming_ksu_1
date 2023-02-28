'''7. Дано ціле число N (> 2) і дві дійсні точки на числовій осі:
A, B (A <B). Функція F (X) задана формулою F (X) = 1 - sin (X).
Вивести значення функції F в N рівновіддалених точках, що
утворюють розбиття відрізка [A, B]: F (A), F (A + H), F (A + 2H), ..., F (B).'''

print('enter A,B(A<B)')
a=int(input())
b=int(input())
i=0
import math as m

if a<b:
    print('enter n>2')
    n=int(input())
    h=(b-a)/n
    print('the lenght of a single segment',h)
    print('function value F(x)=1-sin(x)')
    h=int(h)
    while i<h:
        print('x=', a+i*h)
        print('F(x)=',1-m.sin(a+i*h))
        i+=1
else:
    print('error - a>b')