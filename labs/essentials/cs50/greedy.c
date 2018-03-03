#include <stdio.h>

int main(void){
	float money = 0;

	do
	{
		printf("O hai! How much change is owed? ");
		scanf("%f", &money);
		getchar();
	} 
	while (money <= 0);

  	int quarters = 25;
	int dimes = 10;
	int nickels = 5;
	int pennies = 1;

	int	dollars = (int)money;

	int cents = (money - dollars) * 100;

	int coin_count = dollars * 4;

	while(cents >= quarters)
	{
		coin_count++;
		cents -= quarters;
	}	
	while(cents >= dimes){
		coin_count++;
		cents -= dimes;
	}
	while(cents >= nickels){
		coin_count++;
		cents -= nickels;
	}
	while(cents >= pennies){
		coin_count++;
		cents -= pennies;
	}
	
	printf("%d\n", coin_count);
}
