var firstA = [];
var firstsize = parseInt(prompt("Type the size of the first array: "));
var secondA = [];
var secondsize = parseInt(prompt("Type the size of the second array: "));
for (i = 0; i < firstsize; i++){
    firstA[i] = prompt(`Enter the ${i+1}º array value of the first array: `);
}
for (i = 0; i < secondsize; i++){
    secondA[i] = prompt(`Enter the ${i+1}º array value of the second array: `);
}
const fusion = firstA.concat(secondA);

alert(`The resulting array is: ${fusion}`);