
/*This is header of c program example*/

#include <stdio.h>
//#include "val.c"

//is don't have need to include val.c only you need to write prototipe of function
//this function is part of val.c but if we compile file val.c and prg.c to object file
//and then compile two object file to one bin we can run it successfull 
//this technique make compie process faster specialy for large projects.
#include "val.h"


/*Here add some comment about the code*/
float Result;
signed int level;



int main (){

	level = get_int_value("Enter your latitude in miles" , -200, 1000);
	printf("%d Meters is correct latitude level.\n", level);

	return 0;
}//end main

/*Here is end of code thath is all folks*/
