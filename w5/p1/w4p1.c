/*
 * ==================================================
 * Workshop #4 (Part-1):
 * ==================================================
 * Name   : Fardeen Panjwani
 * ID     : 119588218
 * Email  : fspanjwani@myseneca.ca
 * Section: ZEE
 */
#define _CRT_SECURE_NO_WARNINGS
#define MAX_WISHLIST_ITEMS 10
#include<stdio.h>
#include<string.h>

double sumArray(double arr[], int n) {
  double total = 0;
  for(int i = 0; i < n; i++) {
    total = total + arr[i];
  }

  return total;
}

int main(void) {
  const float MAX_INCOME = 400000.00;
  const float MIN_INCOME = 500.00;
  const double MIN_COST = 100.00;

  float netMonthlyIncome;
  int numberOfWishListItems = 0;
  double costs[10];
  int priority[10];
  char finance[10] = "";

  printf("+--------------------------+\n");
  printf("+   Wish List Forecaster   |\n");
  printf("+--------------------------+\n\n");

  printf("Enter you monthly NET income: $");
  scanf("%f", &netMonthlyIncome);
  while(netMonthlyIncome < MIN_INCOME || netMonthlyIncome > MAX_INCOME) {
    if(netMonthlyIncome < MIN_INCOME) {
      printf("ERROR: You must have a consistent monthly income of at least $500.00\n\n");
      printf("Enter you monthly NET income: $");
      scanf("%f", &netMonthlyIncome);
    } else if(netMonthlyIncome > MAX_INCOME) {
      printf("ERROR: Liar! I'll believe you if you enter a value no more than $400000.00\n\n");
      printf("Enter you monthly NET income: $");
      scanf("%f", &netMonthlyIncome);
    }
  }

  printf("\nHow many wish list items do you want to forecast?: ");
  scanf("%d", &numberOfWishListItems);
  while(numberOfWishListItems <= 0 || numberOfWishListItems > MAX_WISHLIST_ITEMS) {
    printf("ERROR: List is restricted to between 1 and 10 items.\n");
    printf("\nHow many wish list items do you want to forecast?: ");
    scanf("%d", &numberOfWishListItems);
  }

  for(int i = 0; i < numberOfWishListItems; i++) {
    printf("\nItem-%d Details:\n", i + 1);
    printf("  Item cost: $");
    scanf("%lf", &costs[i]);
    while(costs[i] < MIN_COST) {
      printf("    ERROR: Cost must be at least $100.00\n");
      printf("  Item cost: $");
      scanf("%lf", &costs[i]);
    }

    printf("  How important is it to you? [1=must have, 2=important, 3=want]: ");
    scanf("%d", &priority[i]);
    while(priority[i] < 1 || priority[i] > 3) {
      printf("    ERROR: Value must be between 1 and 3\n");
      printf("  How important is it to you? [1=must have, 2=important, 3=want]: ");
      scanf("%d", &priority[i]);
    }

    printf("  Does this item have financing options? [y/n]: ");
    char tmp;
    scanf(" %c", &tmp);
    int compare = tmp == 'y' || tmp == 'n';
    while(compare < 1) {
      printf("    ERROR: Must be a lowercase 'y' or 'n'\n");
      printf("  Does this item have financing options? [y/n]: ");
      scanf(" %c", &tmp);
      compare = tmp == 'y' || tmp == 'n';
    }
    strncat(finance, &tmp, 1);
  }

  printf("Item Priority Financed        Cost\n");
  printf("---- -------- -------- -----------\n");
  for(int i = 0; i < numberOfWishListItems; i++) {
    printf("%3d  %5d    %5c    %11.2lf\n", i + 1, priority[i], finance[i], costs[i]);
  }
  double total = sumArray(costs, numberOfWishListItems);
  printf("---- -------- -------- -----------\n");
  printf("                      $%11.2lf\n\n", total);

  printf("Best of luck in all your future endeavours!");

  return 0;
}
