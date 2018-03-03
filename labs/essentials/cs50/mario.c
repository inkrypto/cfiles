#include <stdio.h>

int main(void){
	int h;
	do
	{
		printf("Height: ");
		scanf("%d", &h);
		getchar();
		fflush(stdin);
	}

	//check to make sure it's falls in range
	while(h < 0 || h > 23);
	
	//loop to create the hash block
	for(int i = 0; i < h; i++)
	{
		
		//create spaces to align the blocks by subtracting i by the number in height 
		for(int spaces = h - i; spaces > 1; spaces--)
		{
			printf(" ");
		}

		//print out the hashes
		for(int hash = 0; hash < i + 1; hash++)
		{
			printf("#");
		}
	printf("\n");
	}
}
