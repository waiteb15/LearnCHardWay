#include <stdio.h> 


/* This is a comment.*/

int main(int argc, char *argv[])
{ 
	int i = 0; 

	if(argc==1) { 
		printf("You only have one argument. You suck.\n"); 
	} else if(argc > 1 && argc <4) { 
		printf("heres your arguments:\n");
		for(i=0;i<argc;i++){
			printf("%s ", argv[i]); 

		}
		printf("\n");
	} else{
		printf("You have too many argument. You suck.\n");
	} 
 

	return 0;
} 
