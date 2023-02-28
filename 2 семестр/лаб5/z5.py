'''Описати функцію Count1(x) – кількість непарних цифр натурального числа х. Скласти
програму, яка роздруковує значення функції Count1(x) для набору з 6 чисел.'''


def Count1(x):
     d=0
     while(x!=0): 
        r=int(x%10) 
        if r%2!=0:
            d+=1
        x=int(x/10)
    
     return d

print('enter 6 x')
x=int(input())
h=int(input())
a=int(input())
b=int(input())
c=int(input())
d=int(input())

print(x,' - ',Count1(x))
print(h,' - ',Count1(h))
print(a,' - ',Count1(a))
print(b,' - ',Count1(b))
print(c,' - ',Count1(c))
print(d,' - ',Count1(d))