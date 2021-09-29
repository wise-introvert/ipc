/*
 * AUTHOR      <your name>
 * EMAIL       <your seneca email id>
 * SENECA ID   <your seneca id>
 * DESCRIPTION <description>
 */

#include<stdio.h>
#include<math.h>

int main(void) {
  float amount;

  printf("Change Maker Machine\n");
  printf("====================\n");
  printf("Enter dollars and cents amount to convert to coins: $");
  scanf("%f", &amount);
  int toonies = amount / 2;
  double amountRemainingAfterToonies = amount - ((double) (toonies * 2));
  int loonies = ((double) amountRemainingAfterToonies) / 1;
  double amountRemainingAfterLoonies = amountRemainingAfterToonies - loonies;
  int quarters = ((double) amountRemainingAfterLoonies) / 0.25;
  double amountRemainingAfterQuarters = amountRemainingAfterLoonies - ((double) (quarters * 0.25));

  if(toonies > 0) {
    printf("\n$2.00 Toonies x %d (remaining: $%.2f)", toonies, amountRemainingAfterToonies);

  }
  if(loonies > 0) {
    printf("\n$1.00 Loonies x %d (remaining: $%.2f)", loonies, amountRemainingAfterLoonies);

  }
  if(quarters > 0) {
    printf("\n$0.25 Quarters x %d (remaining: $%.2f)", quarters, amountRemainingAfterQuarters);

  }

  if(amountRemainingAfterQuarters > 0) {
    printf("\n\nMachine error! Thank you for letting me keep $%.2f!", amountRemainingAfterQuarters);

  } 

  printf("\n");

  return 0;

}
