//This code calculates the basic operations between two numbers.

//Declaring variables...
var sum, sub, div, mult, x, y;
sum = sub = div = mult = x = y = 0;

//Asking for input
x = parseFloat(prompt("Type the first value (x): "));

y = parseFloat(prompt("Type the second value (y): "));

//Calculating...
sum = x+y;
sub = x-y;
div = x/y;
mult = x*y;

//Informing the results to the user
alert(` ${x} + ${y} = ${sum} \n ${x} - ${y} = ${sub} \n ${x} / ${y} = ${div} \n ${x} * ${y} = ${mult}`);
