/*
 * This is a program to calculat the total after at
 * 5% tax increase.
 */

#include <stdio.h>

#define TAX_RATE 0.05f

int main(void) {
  float cost, total;

  printf("Enter the cost before tax: ");
  scanf("%f", &cost);

  total = cost + (cost * TAX_RATE);

  printf("The total cost after tax is: $%.2f\n", total);

  return 0;
}
