#include <stdio.h>
#include <string.h>
//This code finds a word in a string.

//Declaring functions...
int countOccurrences(char * str, char * toSearch);

int tolower(int argument);

int main()
{
    //Declaring variables...
    char str[40];
    char toSearch[40];
    int count;
    //Adquiring the string and word.
    printf("Enter any string: ");
    scanf("%[^\n]%*c", str);
    printf("Enter word to search occurrences: ");
    scanf("%[^\n]%*c", toSearch);
    
    //Calling the countOccurrences function...
    count = countOccurrences(str, toSearch);

    return 0;
}

int countOccurrences(char * str, char * toSearch)
{
    int i, j, found, count, stringLen, searchLen, v[100];
    
    //Adquiring the lenght of the string, and the word.
    stringLen = strlen(str);     
    searchLen = strlen(toSearch); 
    
    //Lowering case in both word and string to make sure it finds the word, not being case sensitive.
    for(int i=0; i<stringLen; i++){
       str[i] = tolower(str[i]);
    }
    for(int i=0; i<searchLen; i++){
       toSearch[i] = tolower(toSearch[i]);
    }
    count = 0;
    //Searching for the word in the string...
    for(i=0; i <= stringLen-searchLen; i++)
    {
        
        found = 1;
        for(j=0; j<searchLen; j++)
        {
            if(str[i + j] != toSearch[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            v[count] = i;
            count++;
        }
    }
    //Printing the results...
    printf("The word appeared: %d times! \n", count);
    if(count != 0){
        printf("The positions they're on are: ");
        for(int i = 0; i < count; i++){
        printf("%d ", v[i]);
        }
    }
    
    return count;
}