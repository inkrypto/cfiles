#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 10

void create_random_list();
void selection_sort();
void find_x(int x);

char numbers[N] = {};							// numbers // char *

int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("USAGE, Guess a number 0 - 100 to see if it is in the list './find 18'\n");
		return -1;
	}
	int x = atoi(argv[1]);

	create_random_list();
	selection_sort();
	find_x(x);
}

//Create an array of random numbers, using srand48 means only random the first time you run. to make random use srand, not srand48
void create_random_list()
{
	srand48(time(NULL));
	
	printf("unsorted array[numbers]: \n");
	for(int i = 0; i < N; i++)
		{
			numbers[i] = rand() % 100;			// numbers[i] // char
			printf("%d\n", numbers[i]);
		}
	puts("\n");	
}	

/* 
SELECTION SORT
for i = 0 to n - 2
	min = i
	for j = i to n
		find index of max value
	swap array[min] and array[i]
*/
void selection_sort()
{
	int i, j;
	int min_idx = 0;							//minimum value in the index variable
	for(i = 0; i <= N - 2; i++)
	{
		min_idx = i;							//move minimun value through index 
		
		for(j = i; j <= N - 1; j++)				//loop again to set up comparison
		{
			if(numbers[j] < numbers[min_idx])	//if j bigger than minimum
			{
				min_idx = j;					//move min value into j
			}
		}
		
		if(numbers[min_idx] != numbers[i])		//if min not in the new list
		{
			int temp = 0;						//set up a swap variable
			temp = numbers[min_idx];			//move min into swap
			numbers[min_idx] = numbers[i];		//make min equal to i
			numbers[i] = temp;					//make i equal to swap
		}
	}

	puts("sorted array[numbers]: ");
	for(int i = 0; i < N; i++)
	{
		printf("%d\n", numbers[i]);
	}
}

/* 
SEARCH for number in sorted list 
while length of list > 0;
	look at middle of list
	if number found, return true
	else if number higher, search left
	else if number lower, search right
return false
*/
void find_x(int x)
{
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
