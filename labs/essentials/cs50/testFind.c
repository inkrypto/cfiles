#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 10

int main(int argc, char *argv[])
{
 	
	int x = atoi(argv[1]);
	
	char numbers[N] = {6, 4, 3, 44, 87, 24, 90, 78, 5, 11};			// numbers // char *
	
	for(int i = 0; i < N; i++)
		printf("%d\n", numbers[i]);

	int length = strlen(numbers);
	int middle_idx = (length / 2) - 1;
	int lower_mid = (middle_idx / 2);

	while (length > 0)
	{
		// lenght = 10, idx = 0-9
		// middle = 5, idx = 4
		if(numbers[middle_idx] == x)
		{
			printf("X == %d Middle_idx = %d\n", x, middle_idx);
			break;
		}
		else if (x < numbers[middle_idx])
		{
			// length = 10
			// middle = 4, because indices
			// lower_mid = (middle / 2) == 2 
			printf("%d is less than middle_idx = %d\n", x, numbers[middle_idx]);
			printf("Middle is %d before math\n", middle_idx);
			middle_idx = lower_mid;
			lower_mid /= 2;
			printf("Middle is %d after math\n", middle_idx);
		}
		else if (x > numbers[middle_idx])
		{
			// length = 10
			// middle = 4 
			// lower_mid = (middle / 2) = 2
			// upper_mid = (middle + lower_mid) + 1 = 7 
			printf("%d is greater than middle_idx %d\n", x, numbers[middle_idx]);
			printf("Middle is %d before math\n", middle_idx);
			middle_idx = (middle_idx + 1) + lower_mid;
			lower_mid /= 2;
			printf("Middle is %d after math\n", middle_idx);
		}
	}
}
