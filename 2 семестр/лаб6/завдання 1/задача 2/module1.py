'''      MODULE
Завдання 1: (Обробка двовимірних масивів. Обрати по 2 задачі з Завдання 1. Кожну задачу
обов’язково реалізувати за допомогою функцій)

1. Задано список (якщо треба згенерувати відповідний список). Написати програму, яка
визначить суму елементів парних рядків матриці, записати результат у новий список.
'''

import random
def creatArray():
    r=0
    print("Input first index matrix") #кількість рядків
    x = int(input())
    print("Input second index matrix") #кількість стовпців
    y = int(input())
    array=[]
   
    for i in range (x):
        array.append([])
        for j in range(y):
            array[i].append(random.randint(0,100))
            r+=1
    
    print("Matrix:")
    for u in range(x):
        print(array[u])
    
    h=[]
    print('Sum:')
    for n in range(y):
        s=0
        for m in range(x):
            s+=array[m][n]
        h.append(s)
    print(h)