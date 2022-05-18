#include<stdio.h>
#include<string.h>
int main()
{
    int i, j, tamstr, tamword, temp, numdevezes = 0, chk;
    char str[100], word[20];
    printf("Enter the String: ");
    scanf("%[^\n]%*c", str);
    printf("Enter a Word: ");
    scanf("%[^\n]%*c", word);
    tamstr = strlen(str);
    tamword = strlen(word);
    for(i=0; i<tamstr; i++)
    {
        temp = i;
        for(j=0; j<tamword; j++)
        {
            if(str[i]==word[j])
                i++;
        }
        chk = i-temp;
        if(chk==tamword)
            numdevezes++;
        i = temp;
    }
    printf("The word appeared %d times!", numdevezes);
    return 0;
}