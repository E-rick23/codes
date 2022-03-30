import math

def text_prompt(msg):
  try:
    return raw_input(msg)
  except NameError:
    return input(msg)
number = 0
while number <= 0:
  number = float(text_prompt('Enter a number to know its factorial:'));
  if number <= 0:
    print('O número tem que ser maior que 0');
res = number
counter = 1
while counter < number:
  res = res * counter
  counter = counter + 1
res = round(res)
print(str('The factorial is: ') + str(res));