// This program takes an ISBN number and
// breaks it out and prints it to the user.

#include <stdio.h>

int main(void) {
  int prefix, gid, pc, in, cd;
  printf("Enter ISBN (123-4-567-89012-3): ");
  scanf("%d-%d-%d-%d-%d", &prefix, &gid, &pc, &in, &cd);

  printf("GS1 Prefix: %d\n", prefix);
  printf("Group Identifier: %d\n", gid);
  printf("Publisher Code: %d\n", pc);
  printf("Item Number: %d\n", in);
  printf("Check Digit: %d\n", cd);

  return 0;
}
