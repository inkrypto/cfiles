#include<stdio.h>

int main(void){
	int shower_time;
	printf("How many minutes do you take to shower?\n");
	scanf("%d", &shower_time);
	
	int gallons_per_minute = 12;
	
	printf("Minutes: %d\n", shower_time);
	printf("Bottles: %d\n", shower_time * gallons_per_minute);
	return 0;
}
