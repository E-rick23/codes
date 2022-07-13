#This code calculates the greatest common divisor and least common multiple between two integers using a recursive function.
#gdc is a recursive function that finds the GDC of the number.
def gcd(x, y):
	#The recursion ends if the (y == 0) condition is met.
	if (y == 0):
		return x;
	else:
		return gcd(y, (y%x));
	#If the condition isn't met, the function calls itself, continuing the process.

print("Enter two integers: ");
#Adquiring the values.
n1 = int(input(""));
n2 = int(input(""));
#The first call of the gcd function is made.
maxcd = gcd(n1, n2);
lcm = (n1*n2)/maxcd;
#After the recursion is over, the results are printed.
print("GCD = " + str(maxcd));
print("LCM = " + str(lcm));