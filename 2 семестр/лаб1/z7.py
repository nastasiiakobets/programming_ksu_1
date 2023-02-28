"""7. За довжинами двох сторін деякого трикутника і кутом між ними
знайти довжину третьої сторони і площу цього трикутника"""
print('enter a,b and angle in radians')
a=int(input())
b=int(input())
c=float(input())
import math
d=a**2+b**2-2*a*b*(math.cos(c))
S=1/2*a*b*(math.sin(c))

print('S = ',S)
f=math.sqrt(d)
print('d = ',f)