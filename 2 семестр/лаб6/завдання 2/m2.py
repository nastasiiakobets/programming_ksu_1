'''    MODULE
Розробіть функції для здійснення наступних операцій зі списками:'''

'''1. Введення списку;'''
def enter():
    print('enter list: ')
    a=list(map(int, input().split()))
    return a

'''2. Заповнення списку випадковими числами;'''
def rand():
    import random
    print('enter length: ')
    x=int(input())
    c=int(input('lower limit = '))
    d=int(input('upper limit = '))
    a=[]
    for i in range(x):
        a.append(random.randint(c, d))
    return a

'''3. Виведення списку'''
def inputt(a):
    print(a)

'''4. Пошук елементу за значенням;'''
def znach(a):
    c=int(input('enter number: '))
    f=0
    k=0
    for i in a:
        if c==i:
            f=1
            k+=1
    if f==1:
        print('yes, ',k,' times')
    elif f==0:
        print('no')

'''5. Пошук максимального елементу;'''
def max(a):
    max=0
    for i in a:
        if max<i:
            max=i
    print('max = ',max)

'''6. Сортування списку за зростанням (спаданням);'''
def sort(a):
    p=int(input('increase - 1 or decrease - 2: '))
    if p==1:
        a.sort()
    elif p==2:
        a.sort(reverse=True)
    else:
        print('error')

    print(a)

'''7. Пошук середнього арифметичного.'''
def average(a):
    s=0
    k=0
    for i in a:
        s=s+i
        k+=1
    sr=s/k
    print(sr)

def menu():
       print("          MENU:")
       print("3 - display a list")
       print("4 - search for an item by value")
       print("5 - search for the maximum element")
       print("6 - sort list by ascending (descending)")
       print("7 - search for arithmetic mean")
       print("0 - end")