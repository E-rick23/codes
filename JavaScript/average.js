var values, counter, x, total, average;
values = parseInt(prompt("Type how many numbers you'll work with: "));
counter = 0;

while (counter < values){
    x = prompt(`Type the ${c+1}º value: `);
    total = total+x;
    counter = counter+1;
};
average = total/values;
alert("The average is:" + average);