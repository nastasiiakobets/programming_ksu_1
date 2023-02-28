'''11. Дано список. Вивести спочатку всі негативні елементи, а потім всі інші'''

print('enter list: ')
a=list(map(int, input().split()))

i=0
d=[]
f=[]

for i in a:
    if i<0:
        d.append(i)
    else:
        f.append(i)

print(d+f)
