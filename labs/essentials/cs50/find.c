#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 10

int main(int argc, char *argv[])
{
	int x = atoi(argv[1]);
	
	// create an array of random numbers
	srand48(time(NULL));
	
	char numbers[N] = {};				// numbers // char *
	
	printf("unsorted array[numbers]: \n");
	for(int i = 0; i < N; i++)
		{
			numbers[i] = rand() % 100;	// numbers[i] // char
			printf("%d, ", numbers[i]);
		}
	puts("\n");	

/* SELECTION SORT
for i = 0 to n - 2
	min = i
	for j = i to n
		find index of max value
	swap array[min] and array[i]
*/

	int min_idx = 0;
	for(int i = 0; i <= N - 2; i++)
	{
		min_idx = i;
	
		for(int j = i; j <= N - 1; j++)
		{
			if(numbers[j] < numbers[min_idx])
			{
				min_idx = j;
			}
		}
		
		if(numbers[min_idx] != numbers[i])
		{
			int temp = 0;
			temp = numbers[min_idx];
			numbers[min_idx] = numbers[i];
			numbers[i] = temp;
		}
	}

	puts("sorted array[numbers]: ");
	for(int i = 0; i < N; i++)
	{
		printf("%d, ", numbers[i]);
	}
	getchar();

/* SEARCH for number in sorted list 
while length of list > 0;
	look at middle of list
	if number found, return true
	else if number higher, search left
	else if number lower, search right
return false
*/
	int middle_idx = (N / 2) - 1;
	int lower_mid = (middle_idx / 2);

	while (N > 0)
	{
		// N = 10, idx = 0-9
		// middle = 5, idx = 4
			
		if (x < numbers[middle_idx])
		{
			// N = 10
			// middle = 4, because indices
			// lower_mid = (middle / 2) == 2 
			printf("%d is less than middle_idx %d\n", x, numbers[middle_idx]);
			printf("Middle is %d before math\n", middle_idx);
			middle_idx = lower_mid;
			lower_mid /= 2;
			printf("Middle is %d after math\n", middle_idx);
		}
		
		else if (x > numbers[middle_idx])
		{
			// N = 10
			// middle = 4 
			// lower_mid = (middle / 2) = 2
			// upper_mid = (middle + lower_mid) + 1 = 7 
			printf("%d is greater than middle_idx %d\n", x, numbers[middle_idx]);
			printf("Middle is %d before math\n", middle_idx);
			middle_idx = (middle_idx + 1) + lower_mid;
			lower_mid /= 2;
			printf("Middle is %d after math\n", middle_idx);
		}

		else if (numbers[middle_idx] == x)
		{
			printf("X == %d Middle_idx %d\n", x, middle_idx);
			break;
		}
		
		if (middle_idx == 0) 
		{
			printf("The number you entered was not in the list. Guess again.\n");
			break;
		}
	}
}
