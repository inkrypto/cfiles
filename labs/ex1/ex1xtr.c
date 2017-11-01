#include<stdio.h>

/*this is a comment*/
int main(int argc, char *argv[])
{
	int distance = 100;
	
	/*this is also a comment*/
	printf("You are %d miles away.\n", distance);
	printf("1 x %d = %d\n", distance, distance); //testing printf 
	puts("This is the difference between printf and puts."); //testing puts, in puts you don't need a newline
	printf("What does this do %%?\n"); //testing %%
	printf("What about this %b stuff\n"); //testing %b couldn't get working

	return 0;
}
