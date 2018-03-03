#include <stdio.h>

int main(void){
	char buffer[30];
	printf("What is your full name? \n");
		
	//string fgets(string s, int i, FILE* fp);
	fgets(buffer, 30, stdin);
	char *firstname = buffer[0];
	char *secondname = strchr(buffer, 32) + 1;
	char *lastname = ((strchr(buffer, 32) + 1, 32) + 1); 
	printf("%c", toupper( buffer[0] ));
		
	printf("%c", toupper( *(strchr(buffer, 32) + 1) ));

	printf("%c", toupper( *(strchr( strchr(buffer, 32) + 1, 32) + 1) ));
}
