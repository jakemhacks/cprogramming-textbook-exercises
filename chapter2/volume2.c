/* Compute the volume of a sphere
 * from user input
 */
#include <stdio.h>

#define PI 3.14f

int main(void) {
  float radius;
  printf("Enter the radius: ");
  scanf("%f", &radius);

  float volume = (4.0f / 3.0f) * PI * (radius * radius * radius);

  printf("%.2f\n", volume);
}
