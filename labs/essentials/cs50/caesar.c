#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Create caesar cipher
1. get key from user
2. get plaintext
3. encipher
4. print cipher text
*/

int main(int argc, char *argv[]){
	int key = atoi(argv[1]);
	int i = 0;

	char alphabet[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char secret[26]={0};
	
	printf("plaintext: ");
	fgets(secret, 26, stdin);

	printf("Secret[] is at %p\n", &secret);
	printf("%s\n", secret);
	
	char current_character = 0;
	char cipher[26]={0};
	
	for(i = 0; i < strlen(secret); i++)
	{
		if(!isalpha(secret[i]))
		{
			cipher[i] = secret[i];
		}
		else if(isupper(secret[i]))
		{
			current_character = (((secret[i]+key)-65) % 26);
			cipher[i] = toupper(alphabet[current_character]);
		} 
		else 
		{
			current_character = (((secret[i]+key)-97) % 26);
			cipher[i] = alphabet[current_character];
		}
	}
	printf("ciphertext: %s\n", cipher);
}
