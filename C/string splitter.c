#include <stdio.h>
#include <string.h>
//This code splits strings using a delimiter character (Both entered by the user).
int main()
{
	//First the user enters a string that will be used by the program, it needs to have 50 characters or less.
	printf("Enter the string (max 50 characters): ");
	char str[50];
	scanf("%[^\n]%*c", str);
	//After that, the user enters a character that will separate the string.
	char delim[] = " ";
	printf("Enter the delimiter character: ");
	scanf("%c", &delim[0]);

	char *ptr = strtok(str, delim);
	//The while loop prints the words separated by the delimiter.
	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	printf("\n");

	return 0;
}