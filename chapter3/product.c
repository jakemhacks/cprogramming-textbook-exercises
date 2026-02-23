/* This program takes product information and
 * presents it in a more readable information
 */

#include <stdio.h>

int main(void) {
  int item_num, day, month, year;
  float price;

  printf("Enter item number: ");
  scanf("%d", &item_num);

  printf("Enter unit price: ");
  scanf("%f", &price);

  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("Item\t\tUnit\t\tPurchase\n");
  printf("\t\tPrice\t\tDate\n");
  printf("%-d\t\t$%8.2f\t%-d/%-d/%-d\n", item_num, price, month, day, year);

  return 0;
}
