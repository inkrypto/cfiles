#include<stdio.h>

int main(int argc, char *argv[])
{
	int distance = 100;
	float power = 2.345f;
	double super_power = 56789.4532;
	char initial = 'A';
	char first_name[] = "Brent";
	char last_name[] = "Morris";

	printf("You are %d miles away.\n", distance); 
	printf("You have %f levels of power.\n", power); 
	printf("You have %f awesome super powers.\n", super_power); 
	printf("You have an initial %c.\n", initial); 
	printf("I are %s, mate!.\n", first_name); 
	printf("I are %s miles away.\n", last_name); 
	printf("I are %s %c. %s.\n", first_name, initial, last_name); 

	int bugs = 100;
	double bug_rate = 1.2;

	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);

	long universe_of_defects = 17L * 1024L * 1024L * 1024L;
    	printf("The entire universe has %ld bugs.\n", universe_of_defects);

    	double expected_bugs = bugs * bug_rate;
    	printf("You are expected to have %f bugs.\n", expected_bugs);

    	double part_of_universe = expected_bugs / universe_of_defects;
    	printf("That is only a %e portion of the universe.\n",
            part_of_universe);

    	// this makes no sense, just a demo of something weird
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should car %d%%.\n", care_percentage);
	printf("This is the nullbyte thing %s.\n", nul_byte);    	
	return 0;
}

