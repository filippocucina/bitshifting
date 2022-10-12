#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv) {
	
	int result;
	int some_number = 100;	
	
	
	result = some_number * 2;
	/*
	result >> 2;
	printf("%i \n\n", result);
	result = some_number << 1;
	printf("%i \n", result);
	result = some_number << 2;
	printf("%i \n", result);
	result = some_number << 3;
	printf("%i \n", result);
	result = some_number << 4;
	printf("%i \n", result);
	*/

	result = result >> 2;
	printf("%i \n", result);
	
	
	/*
	for (int i = 0; i <= 3; i++) {
		printf("Value: %i \n", result);
	}
	*/
	
	
	return 0;
}
