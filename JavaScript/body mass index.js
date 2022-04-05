var weight = prompt("Enter your weight");
var height = prompt("Enter your height");
var bmi = weight/(height*height);
if (bmi < 16){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Underweight (Severe Thinness).`);
}
if (bmi >= 16 && bmi <= 16.9){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Underweight (Moderate thinness).`);
}
if (bmi >= 17 && bmi <= 18.4){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Underweight (Mild thinness).`);
}
if (bmi < 25) {
    console.log("Normal");
} else {
    console.log("Overweight");
}