'''3. Дано текст. Замінити всі входження найбільшої цифри її словесним написанням.'''

s = input("Enter text: ")
    
aow = s.split(' ')    
max = 0

for word in aow:
 if len(word) == 1 and word[0] >= '0' and word[0] <= '9':
    val = int(word)
    if val > max:
      max = val
    
    if max == 0:
        replace_val = 'null'
    elif max == 1:
        replace_val = 'one'
    elif max == 2:
        replace_val = 'two'
    elif max == 3:
        replace_val = 'three'
    elif max == 4:
        replace_val = 'four'
    elif max == 5:
        replace_val = 'five'
    elif max == 6:
        replace_val = 'six'
    elif max == 7:
        replace_val = 'seven'
    elif max == 8:
        replace_val = 'eight'
    elif max == 9:
        replace_val = 'nine'
    
for word in aow:
        if word == str(max):
            print(replace_val, end=' ')
        else:
            print(word, end=' ')