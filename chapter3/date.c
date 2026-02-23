// This program takes a date input using format specifiers
// and outputs the date in a new format

#include <stdio.h>

int main(void) {
  int month, day, year;
  printf("Please enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);
  printf("You endered the date %d%d%d\n", year, month, day);

  return 0;
}
