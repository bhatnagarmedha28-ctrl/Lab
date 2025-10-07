#include <stdio.h>
int global = 10; 
void function1( ) {
	printf("Function1: globalVar = %d\n", global);
}
void function2( ) {
	printf("Function2: globalVar = %d\n", global);
}
int main( ) {
	printf("Main: globalVar = %d\n", global);
	function1( );
	function2( );
	return 0;
}
