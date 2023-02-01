/*
 * sans titre.c
 * 
 * Copyright 2023 Felipe Zani <felipe@C3PO>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
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

