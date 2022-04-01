//This is a temperature converter, it takes an input and converts it to the desired temperature.
//Be aware that the results are given in point precision 2 (x.xx);
#include <stdio.h>

int main()
{

    float temperature, f, k;
    char base, convert;
    printf("Welcome, this temperature converter uses the following format: 25.0 C > F\n");
    /*First the program tells the user the format they should use.
      The format is: (Temperature base_scale > converted scale)
      Examples: 25 C > F
                150 F > K
                322 K > C 
      Basically any operation using Celsius(C) Fahrenheint(F) and Kelvin(K).*/    
    printf("It supports Celsius(C), Fahrenheint(F) and Kelvin(K)\n");
    printf("Please input the temperature you want converted: ");
    scanf("%f %c > %c", &temperature, &base, &convert);
    //Here, the program will choose the operation that needs to be done by looking at the base scale (C, F or K);
        if (base == 'C' || base == 'c'){
            //After the base scale, the program will look for the second scale to make the conversion.
            //This applies to all other operations.
            if (convert == 'F' || convert == 'f'){
                f = temperature*1.8+32;
                printf("The converted temperature is: %.2f F", f);
            };
            if (convert == 'K' || convert == 'k'){
                k = temperature+273.15;
                printf("The converted temperature is: %.2f K", k);
            };
        };
        if (base == 'F' || base == 'f'){
            if (convert == 'C' || convert == 'c'){
                f = (temperature-32)/1.8;
                printf("The converted temperature is: %.2f C", f);
            };
            if (convert == 'K' || convert == 'k'){
                f = (temperature-32)/1.8;
                k = f+273.15;
                printf("The converted temperature is: %.2f K", k);
            };
        };
        if (base == 'K' || base == 'k'){
            if (convert == 'C' || convert == 'c'){
                k = temperature - 273.15;
                printf("The converted temperature is: %.2f C", k);
            };
            if (convert == 'F' || convert == 'f'){
                k = temperature - 273.15;
                f = k * 1.8 + 32;
                printf("The converted temperature is: %.2f F", f);
            };
        };
    return 0;
}
