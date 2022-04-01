//This is a temperature converter, still quite rough, i will update it soon...
#include <stdio.h>

int main()
{

    float temperature, f, k;
    char base, convert;
    
    scanf("%f %c > %c", &temperature, &base, &convert);
        if (base == 'C' || base == 'c'){
            if (convert == 'F' || convert == 'f'){
                f = temperature*1.8+32;
                printf("%.2f F", f);
            };
            if (convert == 'K' || convert == 'k'){
                k = temperature+273.15;
                printf("%.2f K", k);
            };
        };
        if (base == 'F' || base == 'f'){
            if (convert == 'C' || convert == 'c'){
                f = (temperature-32)/1.8;
                printf("%.2f C", f);
            };
            if (convert == 'K' || convert == 'k'){
                f = (temperature-32)/1.8;
                k = f+273.15;
                printf("%.2f K", k);
            };
        };
        if (base == 'K' || base == 'k'){
            if (convert == 'C' || convert == 'c'){
                k = temperature - 273.15;
                printf("%.2f C", k);
            };
            if (convert == 'F' || convert == 'f'){
                k = temperature - 273.15;
                f = k * 1.8 + 32;
                printf("%.2f F", f);
            };
        };
    return 0;
}
