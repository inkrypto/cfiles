#include <stdio.h>

int main(void){
	char name[20];
	char middle[20];
	char last[20];

	printf("Please type your name: \n");
	scanf("%s%s%s", &name, &middle, &last);

	printf("%c%c%c\n", toupper(name[0]), toupper(middle[0]), toupper(last[0]));

	//how do I continue if there is no middle name?

/*
	char *full_name[60] = {name, middle, last};

	for(int i = 0; i < 20; i++)
	{
		if(full_name[!middle]){
			printf("%c%c\n", toupper(name[0]), toupper(last[0]));
		}else{		
			printf("%c%c%c\n", toupper(name[0]), toupper(middle[0]), toupper(last[0]));
		}
	}
*/

	//how do I check for bad characters? like user types numbers?
}
