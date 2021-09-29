#include <stdio.h>
int main(void){
  double price;
  int age;

  printf("Please enter the age of the rider: ");
  scanf("%d",&age);

  if (age <= 12){
    price = 0;
  } else if( (age >= 13 && age <= 19) || age >= 65 ) {
    price = 2.10;
  } else {
    price = 3.25;
  }    

  printf("The price for the rider of age %d is $%.2lf.\n", age, price);
  return 0;
}

