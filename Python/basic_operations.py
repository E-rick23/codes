#1 - This code makes the basic operations between two numbers.
a = float(input('Type the first number: '));
b = float(input('Type the second number: '));

#2 - These are variables to make the results look cleaner in case one (or all) of the values is an integer.
ai = int(a);
bi = int(b);

#3 - Operations that check if the numbers are integers, and, if so, sets them as integer variables instead of float variables.
if ai == a:
  a = ai;
if bi == b:
  b = bi;

#4 -Basic operations:
addition = a + b;
subtraction = a - b;
division = a / b;
multiplication = a * b;

#5 - Does the same as #3.
multint = int(multiplication);

if multint == multiplication:
  multiplication = multint;

#6 - Does the same as #3 and #5.  
divisionint = int(division);

if divisionint == division:
  division = divisionint;
  
divisionrest = a % b;
#7 - Prints the results.
print(str(a) + ' + ' + str(b) + ' = ' + str(addition));
print(str(a) + ' - ' + str(b) + ' = ' + str(subtraction));
print(str(a) + ' / ' + str(b) + ' = ' + str(division));
print(str(a) + ' x ' + str(b) + ' = ' + str(multiplication));
print(str(a) + ' % ' + str(b) + ' = ' + str(divisionrest));
