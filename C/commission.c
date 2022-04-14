/*This code calculates the total salary of an employee,
  considering a commission of 15% on their sellings. */
#include <stdio.h>
int main() {
   //Declaring variables
   char name;
   double sellings, salary, commission, everything;
    printf("Type the name: ");
    //Receiving the employee name.
   scanf("%s", &name);
    printf("Type the salary: ");
    //Receiving the employee salary.
   scanf("%lf", &salary);
    printf("Type how much the employee sold: ");
    //Receiving the employee sellings.
   scanf("%lf", &sellings);
    //Calculating the commission.
   commission = sellings*(0.15);
    //Adding the commission to the salary.
   everything = salary+commission;
    //Printing the final salary.
   printf("TOTAL = R$ %.2lf\n", everything);
    return 0;
}
