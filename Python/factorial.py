#This code asks for a number, then, tells it's factorial.
#Importing math library
import math
number = 0
#While loop that makes sure the input is a positive number.
while number <= 0:
  number = float(input('Enter a number to know its factorial: '));
  if number <= 0:
    print('The number must be greater than 0!');
res = number
counter = 1
#Recursive operation to get the factorial value.
while counter < number:
  res = res * counter
  counter = counter + 1
res = round(res)
#Printing the factorial.
print(str('The factorial is: ') + str(res));
