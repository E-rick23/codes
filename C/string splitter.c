#include <stdio.h>
#include <string.h>
int main()
{
	printf("Enter the string (max 50 characters): ");
	char str[50];
	scanf("%[^\n]%*c", str);
	int init_size = strlen(str);
	char delim[] = " ";
	printf("Enter the delimiter character: ");
	scanf("%c", &delim[0]);

	char *ptr = strtok(str, delim);

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delim);
	}

	printf("\n");

	return 0;
}