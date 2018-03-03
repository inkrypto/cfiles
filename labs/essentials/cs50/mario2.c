#include<stdio.h>

int main(void){
	int h;
	do
	{
		printf("height: \n");
		scanf("%d", &h);
	} 
	while(h < 0 || h != 1);

	for(int line = 0; line < h; line++)
	{
	for(int spaces = h - line; spaces >  1; spaces--)
	{
		printf(" ");
	}	
	for(int hashes = 0; hashes < line + 2; hashes++)
	{
		printf('#');
	}
	printf("\n");
	}
}
