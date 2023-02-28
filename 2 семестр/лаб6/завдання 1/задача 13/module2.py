'''13. Задано список (якщо треба згенерувати відповідний список). Написати програму пошуку
середнього арифметичного кожного зі стовпців матриці.'''

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
    
    print('Average:')
    for n in range(y):
        s=0
        for m in range(x):
            s+=array[m][n]
        sr=s/x
        print(sr)
    