'''Описати функцію InvDigits (K), яка міняє порядок цифр цілого позитивного числа K на
зворотний (K - параметр цілого типу, який є одночасно вхідним і вихідним). За
допомогою цієї функції поміняти порядок розташування цифр на зворотний для
кожного з п'яти даних цілих чисел.'''


def InvDigits (k):
    reversed = 0

    while(k!=0): 
        r=int(k%10) 
        reversed = reversed*10 + r 
        k=int(k/10)

    k=reversed
    return k

print('enter 5 numbers: ')
f=int(input())
a=int(input())
b=int(input())
c=int(input())
d=int(input())

print('result: ',InvDigits(f),InvDigits(a),InvDigits(b),InvDigits(c),InvDigits(d))