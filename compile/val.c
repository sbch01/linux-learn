//This code is a prat of example of compiling and Makefiles tutorial
//this is validation c code for prg.c
 
#include <stdio.h>
#include "val.h"


//Here is one of validating function for signed iniger numbers
signed int get_int_value (char *prompt, signed int min, int max){

	signed int value;
	
	do{
	
		printf("%s: ", prompt);
		scanf("%d", &value);
		if (value < min) printf("The value must be bigger then %d \n", min);
		if (value > max) printf("The value must be smaller then %d \n", max);
	
	}
	while (value < min || value > max);
	return value;	
} 

double get_float_value (char *prompt, double min, double max){

	signed int value;
	
	do{
	
		printf("%s: ", prompt);
		scanf("%d", &value);
		if (value < min) printf("The value must be bigger then %.2lf degrees\n", min);
		if (value > max) printf("The value must be smaller then %.2lf degrees\n", max);
	
	}
	while (value < min || value > max);
	return value;	

} 

