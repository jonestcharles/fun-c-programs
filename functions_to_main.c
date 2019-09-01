#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int numPlants;
	double plantPrice, totalPrice;
	//check for valid input
	if (argc != 3) {
		printf("Invalid input.\n");
	} else {
		//convert input to int/doubles
		numPlants = atoi(argv[1]);
		plantPrice = atof(argv[2]);
		//calculate total price and print
		totalPrice = numPlants * plantPrice;
		printf("%d plants for %0.2lf dollars each cost %0.2lf dollars.\n", numPlants,
		plantPrice, totalPrice);
	}
	
	return 0;
}
