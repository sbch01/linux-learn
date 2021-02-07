//This code is a prat of example of compiling and Makefiles tutorial
//this is validation c code for prg.c
 
#include <stdio.h>

/*Here is prototipe of function*/
int get_int_value (char *prompt, int min, int max);
signed int Temp;


int main (){

	Temp = get_int_value("Enter tempriture in celsis", -10, 70);
	return 0;
	
}//end main

//Here is one of validating function for signed iniger numbers
signed int get_int_value (char *prompt, int min, int max){

	signed int value;
	
	do{
	
		printf("%s: ", prompt);
		scanf("%d", &value);
		if (value < min) printf("The value must be greater then %d \n", min);
		if (value > max) printf("The value must be smaller then %d \n", max);
	
	}
	while (value < min || value > max);
	printf("You enter correct value of %d C.\n", value);
	return value;	

} 

/*Here start validating function*/
/*Here is end of code thath is all folks*/
