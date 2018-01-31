#include <stdio.h>
#include <stdlib.h>

int main(){
	int *sizes = malloc(20 * sizeof(int));
	*sizes = 10;
	//int *ptr;
	//ptr = sizes;
	
	//calculate the length of the array
	//for(int i = 0; i < num_elements; i++)
	printf("Address %p contains %d\n", sizes, *sizes);

	sizes[2] = 20;
	printf("sizes[2] contains %d\n", sizes[2]);
	printf("The size of sizes[] is %d\n", sizeof(sizes));

	int num_elements = sizeof(sizes) / sizeof(int);
	printf("there are %d elements in sizes[]\n", num_elements);
	
	free(sizes);
}
