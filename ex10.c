#include <stdio.h> 


/* This is a comment.*/
int main(int argc, char *argv[])
{ 
	int i = 0; 
	//g throu each string in argv
	//why am I skipping argv[]
	for(i=1; i<argc ;i++){ 
		printf("arg %d: %s\n", i, argv[i]); 
	}


	// Lets make our own array of strings
	char *states[]={"California","Oregon","Washington","Texas"};
	int num_states =4 ; 


	for(i=0; i < num_states; i++){ 
		printf("state %d: %s\n", i, states[i]); 
	} 

	return 0;
} 
