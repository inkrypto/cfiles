#include <stdio.h>
#include <stdlib.h>
	srand48(time(NULL));
    
	char numbers[10]={};
	for(int i = 0; i < 10; i++)
	{   
		numbers[i] = rand()%100;
	}   

	int min_idx = 0;

	for(int i = 0; i <= N - 2; i++)
	{
		min_idx = i;
		for(int j = i; j <= N - 1; j++)
		{
			if(numbers[j] < numbers[min_idx])
			{
				min_idx = j;
				//printf("%d\n", numbers[j]);
			}
		}
		if(numbers[min_idx] != numbers[i])
		{
			int temp = 0;
			temp = numbers[min_idx];
			numbers[min_idx] = numbers[i];
			numbers[i] = temp;
			//printf("%d\n", numbers[i]);
		}
	}
	for(int i = 0; i < N; i++)
		printf("%d\n", numbers[i]);
