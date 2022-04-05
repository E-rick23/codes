var p = prompt("Enter your weight");
var a = prompt("Enter your height");
var imc = p/(a*a);
if (imc < 25) {
    console.log("Normal");
} else {
    console.log("Overweight");
}