#This code simply asks for a number, and shows the first and last digit of that number. :)

#First we start off by asking the user a input.
n = int(input("Enter a number: "));
#We then set a "last" variable, to store the last number, by using the following operation.
last = n%10;
#While loop to get the first digit.
while (n >= 10):
    n = n/10;
#After that, we set the n variable to be an Integer.
#If that doesn't happen, the program will give the floating point, which isn't what we want in this case.
n = int(n);
#After that, the program will print the results.
print("The first digit is: " + str(n));
print("The last digit is: " + str(last));