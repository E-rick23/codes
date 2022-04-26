hours = days = daysandhours = 0;

hours = int(input(""));

days = int((hours/24));

daysandhours = int((hours%24));

if (daysandhours > 0):
    print(str(hours) + str(" hours in days are: ") + str(days) + str(" days and ") + str(daysandhours) + str(" hours!"));
else:
    print(str(hours) + str(" hours in days are: ") + str(days) + str(" days!"));