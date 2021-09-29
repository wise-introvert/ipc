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
  scanf("%f", &amount);
  double serviceFee = amount * 0.05;
  printf("Service fee (5.0 percent): $%.2lf\nBalance to dispense: $%.2lf\n\n", serviceFee, amount - serviceFee);

  double coins[6] = {2, 1, 0.25, 0.10, 0.05, 0.01};
  char *names[6] = {"Toonies", "Loonies", "Quarters", "Dimes", "Nickles", "Cents"};
  double remaining = amount - serviceFee;

  for (int i = 0; i < 6; i++) {
    double currentCurrency = coins[i];
    int quantity = remaining / currentCurrency;
    remaining = (int) remaining % currentCurrency;
    printf("\n$%.2lf %s x %d (remaining: $%.2lf)", currentCurrency, names[i], quantity, remaining);
  }

  printf("\n\nAll coins dispensed!\n");

  return 0;
}
