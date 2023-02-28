#3. Дано три числа. Знайти суму двох найбільших з них#
a = int(input('Enter first number  : '))
b = int(input('Enter second number : '))
c = int(input('Enter third number  : '))

largest = 0
l=0

if a > b and a > c:
    largest = a
    if b>c:
      l=b
    else:
      l=c
if b > a and b > c:
    largest = b
    if a>c:
      l=a
    else:
      l=c
if c > a and c > b:
    largest = c
    if b>a:
      l=b
    else:
      l=a

s=l+largest
print('sum = ',s)