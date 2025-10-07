#include <stdio.h>
int main( ) {
if (1) {
int block = 50;
printf("Inside block: blockVar = %d\n", block);
}
// printf("Outside block: blockVar = %d\n", block); // This will cause an error
return 0;
}
