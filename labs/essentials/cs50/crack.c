#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define _XOPEN_SOURCE
#include <unistd.h>

char *crypt(const char *key, const char *salt);

int main(int argc, char *argv[]){

	if(argc != 2)
	{
		printf("Error: put in a word to encrypt: \n");
		return 1;
	}
	else
	{	
		const char *key = argv[1];
		const char *salt ="XX";
		char *password;
		
		password = crypt(key, salt);

		printf("%s\n", password);
	}

	return 0;
}
