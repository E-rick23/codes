#include <stdio.h>
#include <string.h>

void getemail() {
    char arr[80];
    while (1){
        fgets(arr, 80, stdin); 
        char *sp = arr + strcspn (arr, "@"),                 
            *ep = sp + strcspn (*sp ? sp + 1 : sp, ".\n"),  
            result[sizeof arr] = "";                        
    
        if (ep > sp) {                                      
            memcpy (result, sp + 1, ep - sp);               
            result[ep - sp] = 0;                            
            printf ("%s\n", result);                         
        }
        if(strcmp (arr, "FIM\n") == 0)
            break;
    }    
}

int main(){
    getemail();
}