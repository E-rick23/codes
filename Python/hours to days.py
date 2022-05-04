#This simple code converts the user input in hours to days.
#If a certain amount of hours aren't enough to make a day, it will also show them.*/7

#Declaring variables...
hours = days = daysandhours = 0;

#Asking for input...
hours = int(input(""));

#Operations using the entered value...
days = int((hours/24));

daysandhours = int((hours%24));

#If the amount of hours isn't enough to make a day, it will print the amount of days and hours
#If there are no hours left, it will simply print the amount of days.
if (daysandhours > 0):
    print(str(hours) + str(" hours in days are: ") + str(days) + str(" days and ") + str(daysandhours) + str(" hours!"));
else:
    print(str(hours) + str(" hours in days are: ") + str(days) + str(" days!"));