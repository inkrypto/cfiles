#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void){

	char buffer[30];

	printf("What is your full name?\n");

	fgets(buffer, 30, stdin);
	printf("%c", toupper(buffer[0]));

	for(int i = 0; i < strlen(buffer); i++)
	{
		if(buffer[i] == ' ' && buffer[i + 1] != '\0')
		{
			printf("%c", toupper(buffer[i + 1]));
			i++;
		}
	}
	printf("\n");
}
