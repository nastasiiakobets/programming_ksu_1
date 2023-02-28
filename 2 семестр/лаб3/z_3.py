'''3. Визначити, чи є задане натуральне число паліндромом, тобто таким, десяткова запис якого
читається однаково зліва направо і справа наліво.'''

a=int(input("enter a number: "))
temp=a
rev=0

while(a>0):
    d=a%10
    rev=rev*10+d
    a=a//10

if(temp==rev):
    print("the number is palindrome")
else:
    print("not a palindrome")
