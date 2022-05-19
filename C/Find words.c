#include<stdio.h>
#include<string.h>
int main()
{
    int tamstr, tamword, temp, numdevezes = 0, chk, times = 0, v[100];
    char str[100], word[20];
    printf("Enter the String: ");
    scanf("%[^\n]%*c", str);
    printf("Enter a Word: ");
    scanf("%[^\n]%*c", word);
    tamstr = strlen(str);
    tamword = strlen(word);
    for(int i=0; i<tamstr; i++)
    {
        temp = i;
        for(int j=0; j<tamword; j++)
        {
            if(str[i]==word[j])
            {   
                i++;
            }     
        }
        chk = i-temp;
        if(chk==tamword){
            v[times] = i - tamword;
                times++;
                 numdevezes++;
        }
    }
    printf("The word appeared %d times! \n", numdevezes);
    printf("Positions: ");
    for(int i = 0; i < times; i++){
        printf("%d ", v[i]);
    }
    return 0;
}