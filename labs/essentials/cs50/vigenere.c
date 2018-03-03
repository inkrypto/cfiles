/* Create Vigenere cipher
	1. get key from user
	2. get plaintext
	3. encipher
	4. print cipher text
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getNumFromChar(char mChar){
	int num;
	if(isupper(mChar)) num = 65;
	else num = 97;
	return mChar - num;
}

char getCharFromNum(int num){
	return 'a' + num;
}

int main(int argc, char *argv[]){
	
	char *key = argv[1];
	
	int i = 0;
	int j = 0;
	
	//char alphabet[26]={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	char plaintext[256]={0};
	
	printf("plaintext: ");
	fgets(plaintext, 256, stdin);

	
	char current_character = 0;
	char cipher[256]={0};
	
	for(i = 0; i < strlen(plaintext); i++)
	{
		if(!isalpha(plaintext[i]))
		{
			cipher[i] = plaintext[i];
		}
		else if(isupper(plaintext[i]))
		{
			current_character = ((getNumFromChar(plaintext[i]) + getNumFromChar(key[j])) % 26);
			cipher[i] = toupper(getCharFromNum(current_character));
		} 
		else 
		{
			current_character = ((getNumFromChar(plaintext[i]) + getNumFromChar(key[j])) % 26);
			cipher[i] = getCharFromNum(current_character);
		}

		if(isalpha(plaintext[i]))
		{
			j++;
			j = j % strlen(key);
		}
		else 
		{
			continue;
		}
	}	
	printf("ciphertext: %s\n", cipher);
}
