//This code calculates the greatest common divisor and least common multiple between two integers using a recursive function.
//gdc is a recursive function that finds the GDC of the number.
function gcd(x, y) {
	//The recursion ends if the (y == 0) condition is met.
	if (y == 0)
		return x;
	else
		return gcd(y, (y%x));
	//If the condition isn't met, the function calls itself, continuing the process.
};
console.log("Enter two integers: ");
//Adquiring the values.
var n1 = parseInt(prompt(""));
var n2 = parseInt(prompt(""));
//The first call of the gcd function is made.
maxcd = gcd(n1, n2);
lcm = (n1*n2)/maxcd
//After the recursion is over, the results are printed.
console.log(`GCD = ${maxcd}`);
console.log(`LCM = ${lcm}`);