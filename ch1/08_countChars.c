// Exercise 1-8. Write a program to count blanks, tabs, and newlines.
#include <stdio.h>
int main() {
  int c, nb, nt, nl;
  nb = nt = nl = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    if (c == '\t')
      ++nt;
    if (c == '\n')
      ++nl;
  }
  printf("%d,%d,%d\n", nb,nt,nl);
}
