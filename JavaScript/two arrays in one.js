//This code concatenates one array into another one, and prints the resulting array
//First the arrays are declared...
var firstA = [];
var secondA = [];
//After that, the program asks the user the size of the first and second arrays...
var firstsize = parseInt(prompt("Type the size of the first array: "));
var secondsize = parseInt(prompt("Type the size of the second array: "));
//Now, the program fills the arrays with the values the user inputs...
for (i = 0; i < firstsize; i++){
    firstA[i] = prompt(`Enter the ${i+1}º array value of the first array: `);
}
for (i = 0; i < secondsize; i++){
    secondA[i] = prompt(`Enter the ${i+1}º array value of the second array: `);
}
//After the arrays are properly filled, the program concatenates both arrays into a single one.
const fusion = firstA.concat(secondA);
//After the aforementioned process is done, the program prints the resulting array.
alert(`The resulting array is: ${fusion}`);