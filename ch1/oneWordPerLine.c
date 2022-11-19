// Exercise 1-12. Write a program that prints its input one word per line.
#include <stdio.h>
int main() {
  int b,c;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      while((b= getchar())==' ')
        ;  //leaves out multiple spaces in between words
      putchar('\n');
      putchar(b);
    }
    else putchar(c);
  }
}
