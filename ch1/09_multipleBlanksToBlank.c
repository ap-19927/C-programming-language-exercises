// Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.
#include <stdio.h>
int main() {
  int c, b;
  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == ' ') {
      while((b= getchar())==' ')
        ;
      putchar(b);
    }
  }
  printf("\n");
}
