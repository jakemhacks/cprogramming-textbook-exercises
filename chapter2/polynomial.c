/* This calculates a polynomial */
#include <stdio.h>

int main(void) {
  float input;
  printf("Please enter a number: ");
  scanf("%f", &input);

  float result = 3 * (input * input * input * input * input) +
                 2 * (input * input * input * input) -
                 5 * (input * input * input) - (input * input) + (7 * input) -
                 6;
  printf("%.2f\n", result);
}
