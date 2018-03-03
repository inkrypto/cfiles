#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define _XOPEN_SOURCE
#include <unistd.h>
#include <string.h>

char *crypt(const char *key, const char *salt); 
const char *key;
const char *salt = "XX";
char word[5];
char *alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *hash;

void check_a_Z();
void check_aa_ZZ();
void check_aaa_ZZZ();
void check_aaaa_ZZZZ();
void check_final();

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: ./decrypt hash \n");
		return 1;
	}
	else
	{
		key = argv[1];
		check_a_Z();
		check_aa_ZZ();
		check_aaa_ZZZ();
		check_aaaa_ZZZZ();
		check_final();
	}
	
	return 0;
}

void check_a_Z(){
		for(int i = 0; i < 52; i++)
		{
			word[0] = alphabet[i];
			hash = crypt(word, salt);
			if(strcmp(hash, key) == 0)
			{
				printf("%s\n", word);
			}
		}
}


void check_aa_ZZ(){
		//check aa-ZZ
		for(int i = 0; i < 52; i++)
		{
			word[0] = alphabet[i];
			hash = crypt(word, salt);
			if(strcmp(hash, key) == 0)
			{
				printf("%s\n", word);
			}
			for(int j =0; j < 52; j++)
			{
				word[1] = alphabet[j];
				hash = crypt(word, salt);
				if(strcmp(hash, key) == 0)
				{
					printf("%s\n", word);
				}
			}
		}
}

void check_aaa_ZZZ(){
		//check aaa-ZZ
		for(int i = 0; i < 52; i++)
		{
			word[0] = alphabet[i];
			hash = crypt(word, salt);
			if(strcmp(hash, key) == 0)
			{
				printf("%s\n", word);
			}
			for(int j = 0; j < 52; j++)
			{
				word[1] = alphabet[j];
				hash = crypt(word, salt);
				if(strcmp(hash, key) == 0)
				{
					printf("%s\n", word);
				}
				for(int k = 0; k < 52; k++)
				{
					word[2] = alphabet[k];
					hash = crypt(word, salt);
					if(strcmp(hash, key) == 0)
					{
						printf("%s\n", word);
					}
				}
			}
		}
}

void check_aaaa_ZZZZ(){
		for(int i = 0; i < 52; i++)
		{
			word[0] = alphabet[i];
			hash = crypt(word, salt);
			if(strcmp(hash, key) == 0)
			{
				printf("%s\n", word);
			}
			for(int j = 0; j <52; j++)
			{
				word[1] = alphabet[j];
				hash = crypt(word, salt);
				if(strcmp(hash, key) == 0)
				{
					printf("%s\n", word);
				}
				for(int k = 0; k < 52; k++)
				{
					word[2] = alphabet[k];
					hash = crypt(word, salt);
					if(strcmp(hash, key) == 0)
					{
						printf("%s\n", word);
					}
					for(int l = 0; l < 52; l++)
					{
						word[3] = alphabet[l];
						hash = crypt(word, salt);
						if(strcmp(hash, key) == 0)
						{
							printf("%s\n", word);
						}
					}
				}
			}
		}
}

void check_final(){
		for(int i = 0; i < 52; i++)
		{
			word[0] = alphabet[i];
			hash = crypt(word, salt);
			if(strcmp(hash, key) == 0)
			{
				printf("%s\n", word);
			}
			for(int j = 0; j <52; j++)
			{
				word[1] = alphabet[j];
				hash = crypt(word, salt);
				if(strcmp(hash, key) == 0)
				{
					printf("%s\n", word);
				}
				for(int k = 0; k < 52; k++)
				{
					word[2] = alphabet[k];
					hash = crypt(word, salt);
					if(strcmp(hash, key) == 0)
					{
						printf("%s\n", word);
					}
					for(int l = 0; l < 52; l++)
					{
						word[3] = alphabet[l];
						hash = crypt(word, salt);
						if(strcmp(hash, key) == 0)
						{
							printf("%s\n", word);
						}
						for(int m = 0; m < 52; m++)
						{
							word[4] = alphabet[m];
							hash = crypt(word, salt);
							if(strcmp(hash, key) == 0)
							{
								printf("%s\n", word);
							}
						}
					}
				}
			}
		}
	}
