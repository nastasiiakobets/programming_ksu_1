"""15. Дано змінні A, B, C. Змінити їх значення, перемістивши
вміст A в B, B - в C, C - в A, і вивести нові значення змінних A, B, C."""
print('enter A, B and C')
A=int(input())
B=int(input())
C=int(input())
temp=A
A=C
C=B
B=temp
print('A = ',A)
print('B = ',B)
print('C = ',C)