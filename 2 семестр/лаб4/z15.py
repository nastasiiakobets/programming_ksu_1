'''15. У списку чисел перевірити, чи всі елементи є унікальними, тобто кожне число зустрічається
тільки один раз.'''

a=list(map(int, input().split()))

lst1 = []
lst2 = []
lst3 = []

for i in a: 
	if i not in lst1: 
		lst1.append(i)
	else:
		if i not in lst2: 
			lst2.append(i)
			print(i,'- repeated')

for i in lst1: 
	if i not in lst2: 
		lst3.append(i)

print(lst3,'- not repeated')