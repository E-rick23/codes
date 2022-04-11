//Messy code, trying to fix it.
#include <stdio.h>

int main(){
    int value, base, result, temp, mul;
    do{
        scanf("%d", &value); 
        scanf("%d", &base);
        switch(base){
            case 2:{
                result = 0;
                temp = value;
                while (temp > 0){
                    result = (result*10) + (temp%2);
                    temp = temp / 2;
                }
            }
            case 3: {
                result = 0;
                temp = value;
                while (temp > 0){
                    result = (result*10) + (temp%3);
                    temp = temp / 2;
                }
            }
            case 4: {
                result = 0;
                temp = value;
                while (temp > 0){
                    result = (result*10) + (temp%4);
                    temp = temp / 2;
                }
            }
            case 5: {
                 result = 0;
                temp = value;
                while (temp > 0){
                    result = (result*10) + (temp%5);
                    temp = temp / 2;
                }
            }
            case 6: {
                result = 0;
                temp = value;
                mul = 1;
                while (temp > 0){
                    result = result+(temp%6)*mul;
                    mul = mul*10;
                    temp = temp / 6;
                }
            }
            case 7: {
                result = 0;
                temp = value;
                mul = 1;
                while (temp > 0){
                    result = result+(temp%7)*mul;
                    mul = mul*10;
                    temp = temp / 7;
                }
            }
            case 8: {
                result = 0;
                temp = value;
                mul = 1;
                while (temp > 0){
                    result = result+(temp%8)*mul;
                    mul = mul*10;
                    temp = temp / 8;
                 }
            }
        }
        printf("Número %d na base %d = %d\n", value, base, result);
    } while(value != -1);
}