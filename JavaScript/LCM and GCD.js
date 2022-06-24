function gcd(x, y) {
	if (y == 0)
		return x;
	else
		return gcd(y, (y%x));
};
console.log("Enter two integers: ");
var n1 = parseInt(prompt(""));
var n2 = parseInt(prompt(""));
maxcd = gcd(n1, n2);
lcm = (n1*n2)/maxcd
console.log(`GCD = ${maxcd}`);
console.log(`LCM = ${lcm}`);