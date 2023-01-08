/*Exercise 1-20. Write a program detab that replaces tabs in the input with the proper number
of blanks to space to the next tab stop. Assume a fixed set of tab stops, say every n columns.
Should n be a variable or a symbolic parameter?
*/
#include <stdio.h>

#define BLANKSINTAB 6

int main()
{
  int c, i;
  int charsUntilNextStop = 0;
  while( (c=getchar()) != EOF ) {
    if(c == ' ') {
      putchar(c);
      charsUntilNextStop++;
      if(charsUntilNextStop == BLANKSINTAB)
        charsUntilNextStop = 0;
    }
    else if(c == '\t') {
      i = 0;
      while(i++ < BLANKSINTAB - charsUntilNextStop)
        putchar(' ');
      charsUntilNextStop = 0;
    }
    else {
      putchar(c);
      charsUntilNextStop = 0;
    }
  }
  return 0;
}
