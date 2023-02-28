'''Описати функцію Calc (A, B, Op) дійсного типу, що виконує над ненульовими
дійсними числами A та B одну з арифметичних операцій і повертає її результат. Вид
операції визначається цілим параметром Op: 1 - віднімання, 2 - множення, 3 - ділення,
інші значення - додавання. За допомогою Calc виконати для даних A і B операції, які
визначаються даними цілими N1, N2, N3.'''

def Calc (a, b, op):
    if op==1:
        return a-b
    elif op==2:
        return a*b
    elif op==3:
        return a/b
    else:
        return a+b

print('enter A, B and operation number (1-, 2*, 3/, other+ )')
a=int(input())
b=int(input())
op=int(input())

print('result: ',Calc (a, b, op))