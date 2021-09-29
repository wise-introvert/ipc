/*
 * AUTHOR      Fardeen Panjwani
 * EMAIL       fspanjwani@myseneca.ca
 * SENECA ID   119588218
 * DESCRIPTION Print message to the screen
 */

#include<stdio.h>
#include<math.h>

int main(void) {
	float amount;

	printf("Change Maker Machine\n");
	printf("====================\n");
	printf("Enter dollars and cents amount to convert to coins: $");
	scanf("%f", & amount);

	double coins[3] = {
		2,
		1,
		0.25,
	};
	char * names[3] = {
		"Toonies",
		"Loonies",
		"Quarters",
	};
	double remaining = amount;

	for (int i = 0; i < 3; i++) {
		double currentCurrency = coins[i];
		int quantity = remaining / currentCurrency;
		remaining = remaining - (quantity * currentCurrency);
		if(currentCurrency == 2) {
			printf("\n$%.2lf %s  X %d (remaining: $%.2lf)", currentCurrency, names[i], quantity, remaining);
		} else {
			printf("\n$%.2lf %s X %d (remaining: $%.2lf)", currentCurrency, names[i], quantity, remaining);
		}
	}

	if(remaining > (float) 0) {
		printf("\n\nMachine error! Thank you for letting me keep $%.2f!\n", remaining);
	} else {
		printf("\n\nAll coins dispensed!\n");
	}


	return 0;
}
