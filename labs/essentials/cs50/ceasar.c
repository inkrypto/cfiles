#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

	//first time i used malloc
	char *secret = malloc(10);
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char enc_alphabet[26] = {'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w'};

	//print the addr of the pointer malloc that was allocated
	printf("%p\n", secret);

	//print to the user
	printf("Type your message: ");
	
	//accet input from stdin and since it's already an address you don't need the address of it
	scanf("%s", secret);
	printf("%s\n", secret);

	//testing the indicies of the pointer
	printf("%x\n", secret[3]);
	if(secret[0] == 'A')
	{
		printf("X\n");
	}	
	//loop through each character
	for(int i=0; i < strlen(secret); i++)
	{
		printf("%c", secret[i]); 
	}
	printf("\n");
	free(secret);

	for(int i=0; i<strlen(alphabet); i++)
	{
		printf("%c", alphabet[i]);
	}
	printf("\n");

	for(int i=0; i<strlen(enc_alphabet); i++)
	{
		printf("%c", enc_alphabet[i]);
	}
	printf("\n");

	for(int i=0; i < strlen(secret); i++)
	{
		for(int j=0; j < strlen(alphabet); j++)
		{
			if islower(secret[i])
				printf("%c", (((secret[i] + alphabet[i]) - 97) % 26) + 97);
			else if isupper(secret[i])
				printf("%c", (((secret[i] + alphabet[i]) - 97) % 26) + 97);
			else
				printf("%c", secret[i]);
		}
	}
	printf("\n");
	return 0;
}

/*
>>> def ceasar(s):
...     global alphabet
...     global enc_alphabet
...     s = string.lower(s)
...     c = ''
...     for x in s:
...         if x not in alphabet:
...             c += x
...             continue
...         #print("idx is {}".format(alphabet.index(x)))
...         #print("enc is {}".format(enc_alphabet[alphabet.index(x)]))
...         c += enc_alphabet[ alphabet.index(x) ]
...         #print("c is {}".format(c))
...     return c

>>> ceasar(buffer)
'ebiil, tloia'
*/
