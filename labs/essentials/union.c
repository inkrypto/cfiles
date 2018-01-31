#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	union symbol {
		int number;
		char letter;
	};

	union symbol value;
	value.number = 25;
	value.letter = 'm';
	
	union symbol *ptr;			//pointer to union
	ptr = &value;
	char myLetter = ptr -> letter;
	
	printf("letter field: %c\n", myLetter);
	printf("letter field: %d\n", ptr->number);
}
