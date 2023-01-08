/*Exercise 1-21. Write a program entab that replaces strings of blanks by the minimum number
of tabs and blanks to achieve the same spacing. Use the same tab stops as for detab. When
either a tab or a single blank would suffice to reach a tab stop, which should be given
preference?
*/
#include <stdio.h>

#define BLANKSINTAB 6

int main()
{
  int c, i;
  i = 0;
  while( (c=getchar()) != EOF ) {
    if (c == ' ') {
      i++;
      if(i == BLANKSINTAB) {
        i = 0;
        putchar('\t');
      }
    }
    else {
      if( i > 0 )
        while(i-- > 0)
          putchar(' ');
      putchar(c);
      i = 0;
    }
  }
  return 0;
}
