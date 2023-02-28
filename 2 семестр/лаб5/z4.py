'''Описати функцію Ln1 (x, ε) дійсного типу (параметри x, ε - дійсні, | x | <1, ε> 0),
знаходить наближене значення функції ln (1 + x):
ln (1 + x) = x - x2/ 2 + x3/ 3 - ... + (-1) n· xn + 1 / (n + 1) + ....

В сумі враховувати всі складові, модуль яких більше ε. За допомогою Ln1
знайти наближене значення ln (1 + x) для даного x при шести даних ε.'''

from math import pow

def ln(x, eps):
    res = 0
    n = 0
    while True:
        tmp = (pow(-1, n) * pow(x, (n+1))) / (n + 1)
        if abs(tmp) < eps:
            break
        res += tmp
        n+=1

    return res

def main():
    x = float(input("Enter X: "))
    print("enter 6 eps:")
    for i in range(0, 6):
        e = float(input(""))
        print((ln(x, e)))
main()