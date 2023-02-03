/*
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
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
	char charater[50];
	int initiative;
	int turn;
}Turn;

int main(int argc, char **argv)
{
	srand(time(NULL));
	Turn ravel,brutus;	
	strcpy(ravel.charater,"Ravel");
	ravel.initiative=19;
	
	strcpy(brutus.charater,"Brutus");
	brutus.initiative=18;
	if(ravel.initiative>brutus.initiative)
		ravel.turn=1;
	else 
		brutus.turn=1;
	
	//~ while(1)
	//~ {
		//~ printf("C'est le turn de %s",)
	//~ }
	
	
	return 0;
}

