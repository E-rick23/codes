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
    
    mult = mult * x;

    division = division + 1/x
    //The counter goes up by one, each time a value is entered.
    counter++
};
//In the end, the average variable divides the sum of the values entered by the amount of values.
aaverage = total/values;
gaverage = Math.pow(mult, 1/values);
haverage = 10/division;
//After that, it notifies the user the average of the values.
alert("The arithmetic average is: " + aaverage);
alert("The geometric average is: " + gaverage);
alert("The harmonic average is: " + haverage);