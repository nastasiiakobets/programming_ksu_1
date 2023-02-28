'''7. Одиниці маси пронумеровані в такий спосіб: 1 - кілограм, 
2 - міліграм, 3 - грам, 4 - тонна, 5 -центнер. Дано номер 
одиниці маси (ціле число в діапазоні 1-5) і маса тіла в цих одиницях (дійсне
число). Знайти масу тіла в кілограмах.'''

print('enter number(1-kg,2-mg,3-g,4-t or 5-q):')
a=int(input())
print('enter body mass:')
b=float(input())

if a==1:
   print(' your body mass ',b,' kg')
elif a==2:
    k=b/1000000
    print(' your body mass ',k,' kg')
elif a==3:
    k=b/1000
    print(' your body mass ',k,' kg')
elif a==4:
    k=b*1000
    print(' your body mass ',k,' kg')
elif a==5:
    k=b*100
    print(' your body mass ',k,' kg')
else:
    print('error')