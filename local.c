#include <stdio.h>
int global = 20; 
void Function1( ) {
	int local = 5; 
	printf("Inside function:  = %d\n", local);
	printf("Inside function: global Var = %d\n", global);
}
int main( ) {
	Function1( );
	printf("Inside function: globalVar = %d\n", global);
		return 0;
}
