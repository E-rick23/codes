//This program calculates your BMI based on the World Health Organization BMI basic categories.

//First, it asks the height and weight of the user.
var height = prompt("Enter your height (in meters)");
var weight = prompt("Enter your weight (in kg)");
//After that, it calculates the BMI with the following formula.
var bmi = weight/(height*height);
//Next, it makes the result use precision point 2. (x.xx).
var bmi = bmi.toFixed(2);
//Next, depending on the final value of this formula, it will tell the user one of the following results.
if (bmi < 16){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Underweight (Severe Thinness).`);
};
if (bmi >= 16 && bmi <= 16.9){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Underweight (Moderate thinness).`);
};
if (bmi >= 17 && bmi <= 18.4){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Underweight (Mild thinness).`);
};
if (bmi >= 18.5 && bmi <= 24.9){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Normal.`);
};
if (bmi >= 25.0 && bmi <= 29.9){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Overweight.`);
};
if (bmi >= 30.0 && bmi <= 34.9){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Obese(Class 1).`);
};
if (bmi >= 35.0 && bmi <= 39.9){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Obese(Class 2).`);
};
if (bmi >= 40.0){
    alert(`Your BMI is: ${bmi}.\nIt is considered as: Obese(Class 3).`);
};
