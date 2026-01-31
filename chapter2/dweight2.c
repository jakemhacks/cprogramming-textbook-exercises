/* Computes the dimensional weight of a
 * box from input provided by the user*/

#include <stdio.h>

int main(void) {
  int height, length, width, volume, weight;

  printf("Enter the height: ");
  scanf("%d", &height);

  printf("Enter the length: ");
  scanf("%d", &length);

  printf("Enter the width: ");
  scanf("%d", &width);

  volume = height * width * length;
  weight = (volume + 165) / 166;

  printf("Volume (cubic inches): %d\n", volume);
  printf("Dimensional weight (pounds): %d\n", weight);

  return 0;
}
