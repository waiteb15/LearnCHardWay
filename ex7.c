#include <stdio.h>

int main (int argc, char *argv[])
{
	int bugs = 100;
	double bug_rate = 1.2; 

	printf("You have %d bugs at the imaginary rate of %f.\n",bugs,bug_rate); 
	
	long universe_of_defects=1L*1024L ;
	printf("The entire universe has %ld bugs.\n",universe_of_defects); 
	
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs. \n", expected_bugs); 

	double part_of_universe = expected_bugs / universe_of_defects; 
	printf("This is only a %e portion of the universe.\n",part_of_universe); 

	//this makes no sense, it is only a demo

	char nul_byte = '\0'; 
	printf("char %c \n", nul_byte);	
	int care_precentage = bugs * nul_byte; 
	printf("Which meanss you should care %d%%.\n", care_precentage); 

	return 0;
}
