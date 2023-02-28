'''11. Дано число A (> 1). Вивести найменше з цілих чисел K,
для яких сума 1 + 1/2 + … + 1/K будет більше A, і саму цю суму'''

print('enter number A >1')
a=float(input())
s=0
k=0
if a>1:
    while s<a:
     k+=1
     s=s+1/k
    print('K=',k)
    print('sum=',s)
else:
    print('error - A<1')