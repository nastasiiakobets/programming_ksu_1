'''19. Дано список. Виведіть ті його елементи, які зустрічаються в списку тільки один раз. Елементи
потрібно виводити в тому порядку, в якому вони зустрічаються в списку.'''

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

for i in lst1: 
	if i not in lst2: 
		lst3.append(i)

print(lst3,'- not repeated')
