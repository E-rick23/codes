/*This code converts the user input in hours to days.
  If a certain amount of hours aren't enough to make a day, it will also show them.*/7

//Declaring variables...
var hours, days, daysandhours;

hours = parseInt(prompt("Enter the amount of hours to be turned to days: "));
//Considering 24 hours make a day, the variable days makes a division that assures every 24 hours becomes 1 day.
days = parseInt(hours/24); 
//The variable daysandhours gets what's left of the division.
daysandhours = parseInt(hours%24);
/*If daysandhours in fact has a value, then, the program will show the user the days, and hours (which are the rest of the division).
  Or else, if the division rest is 0, it will just return the number of days.*/
if (daysandhours > 0){
    alert(`${(hours)} hours in days are: ${days} days and ${daysandhours} hours!`);
} else {
    alert(`${(hours)} hours in days are: ${days} days!`);
}