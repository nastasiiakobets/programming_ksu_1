'''19. Дано ціле число N (> 1). Послідовність чисел Фібоначчі FK визначається наступним чином:F1 = 1,
F2 = 1, FK = FK-2 + FK-1, K = 3, 4, .... Перевірити, чи є число N числом Фібоначчі. Якщо є, то вивести
true, якщо ні - вивести false.'''

print('enter N >1')
n=int(input())
k=1
f1=1
f2=1
g=0
if n>1:
    while k<n:
        fs=f1+f2
        f1=f2
        f2=fs
        k+=1
        if n==fs:
            g=1
    if g==1:
     print('true')
    else:
     print('false')
else:
    print('error N<1')