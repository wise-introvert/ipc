/*                                                                                                                                                                                            * AUTHOR      Fardeen Panjwani                                                                                                                                                               * EMAIL       fspanjwani@myseneca.ca                                                                                                                                                         * SENECA ID   119588218                                                                                                                                                                      * DESCRIPTION Print message to the screen                                                                                                                                                    */

#include<stdio.h>
#include<math.h>

int getToonies(double amount) {
    int numberOfToonies = amount / 2;

    return numberOfToonies;
}

int getLoonies(double amount) {
    int numberOfLoonies = amount / 1;

    return numberOfLoonies;
}

int getQuarters(double amount) {
  int numberOfQuarters = amount / 0.25;

  return numberOfQuarters;
}

int main(void) {
  float amount;

  printf("Change Maker Machine\n");
  printf("====================\n");
  printf("Enter dollars and cents amount to convert to coins: $");
  scanf("%f", &amount);

  // get the number of toonies
  int numberOfToonies = getToonies(amount);
  double amountRemainingAfterToonies = amount - ((double) (numberOfToonies * 2));

  // divide the remaining amount into loonies
  int numberOfLoonies = getLoonies((double) amountRemainingAfterToonies);
  double amountRemainingAfterLoonies = amountRemainingAfterToonies - numberOfLoonies;

  // finally, get the number of quarters required
  int numberOfQuarters = getQuarters((double) amountRemainingAfterLoonies);
  double amountRemainingAfterQuarters = amountRemainingAfterLoonies - ((double) (numberOfQuarters * 0.25));

  if(numberOfToonies > 0) {
    printf("\n$2.00 Toonies x %d (remaining: $%.2f)", numberOfToonies, amountRemainingAfterToonies);
  }
  if(numberOfLoonies > 0) {
    printf("\n$1.00 Loonies x %d (remaining: $%.2f)", numberOfLoonies, amountRemainingAfterLoonies);
  }
  if(numberOfQuarters > 0) {
    printf("\n$0.25 Quarters x %d (remaining: $%.2f)", numberOfQuarters, amountRemainingAfterQuarters);
  }

  if(amountRemainingAfterQuarters > 0) {
    printf("\n\nMachine error! Thank you for letting me keep $%.2f!", amountRemainingAfterQuarters);
  } 

  printf("\n");

  return 0;
}
