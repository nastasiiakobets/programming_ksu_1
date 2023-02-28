'''Описати функцію Fact (N) дійсного типу, яка обчислює значення факторіала N! = 1 ·
2 · ... · N (N> 0 - параметр цілого типу; функція повертає дійсне значення для того,
щоб уникнути цілочисельного переповнення при великих значеннях N). За
допомогою цієї функції знайти факторіали п'яти даних цілих чисел.'''

def Fact (n):
    result = 1
    for i in range(1,n+1):
        result = result*i
        n=result
    return n

print('enter 5 numbers: ')
a=int(input())
b=int(input())
c=int(input())
d=int(input())
e=int(input())

print(a,'! = ',Fact (a),sep="")
print(b,'! = ',Fact (b),sep="")
print(c,'! = ',Fact (c),sep="")
print(d,'! = ',Fact (d),sep="")
print(e,'! = ',Fact (e),sep="")