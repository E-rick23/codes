//This code calculates the arithmetic, geometric, and harmonic averages of the amount of numbers the user needs.

//Declaring variables...
var values, counter, x, total, aaverage, gaverage, haverage, mult, division;
//Setting variables default value...
counter = total = aaverage = x = gaverage = haverage = division = 0;
mult = 1;
//First, the program asks for input, and converts the input to a int number.
values = parseInt(prompt("Type how many numbers you'll work with: "));
//After that, this while loop keeps counting until the number of values the user wants to work with is reached.
while (counter < values){
    x = parseFloat(prompt(`Type the ${counter+1}º value: `));
    //The value given in x is added to the total variable.
    total = total+x;
    //The value given in x is multiplied in the variable mult, for the geometric average.
    mult = mult * x;
    //The value given in x becomes the divisor of 1 for the harmonic average.
    division = division + 1/x
    //The counter goes up by one, each time a value is entered.
    counter++
};
//In the end, the arithmetic average variable divides the sum of the values entered by the amount of values.
aaverage = total/values;
//The geometric average calculates the square root of the multiplied values.
gaverage = Math.pow(mult, 1/values);
//The harmonic average divides the number of values by the total value of the operation. 
haverage = values/division;
//After that, it notifies the user the averages of the values entered.
alert("The arithmetic average is: " + aaverage);
alert("The geometric average is: " + gaverage);
alert("The harmonic average is: " + haverage);