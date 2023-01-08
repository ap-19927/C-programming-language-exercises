/*Exercise 1-16. Revise the main routine of the longest-line program so it will
correctly print the length of arbitrary long input lines, and as much as
possible of the text.
***
solution based on:
https://clc-wiki.net/wiki/K%26R2_solutions:Chapter_1:Exercise_16#Solution_by_Mr._%22386sx%22
***
*/
#include <stdio.h>
#define MAXLINE 10 /* maximum input line length */
int getLine(char line[], int maxline);
void copy(char to[], char from[]);
/* print the longest input line */
int main()
{
  int len; /* current line length */
  int max; /* maximum length seen so far */
  int overMaxLineLength;
  char line[MAXLINE]; /* current input line */
  char longest[MAXLINE]; /* longest line saved here */
  char lineOverMaxLineLength[MAXLINE];
  max = 0;
  overMaxLineLength = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    if(line[len-1] != '\n') { /* if the line is long */
      if(overMaxLineLength == 0) /* only copy the first line */
        copy(lineOverMaxLineLength, line);
      overMaxLineLength += len; 
    }
    else {
      if(overMaxLineLength > 0) { /* if we're at the end of a long line */
        if(overMaxLineLength + len > max) {
          max = overMaxLineLength + len;
          copy(longest, lineOverMaxLineLength);
          /* the first line of the longest line */
        }
        overMaxLineLength = 0;
      }
      if(len  > max) { /* if the line isn't long to begin with */
        max = len;
        copy(longest, line);
      }
    }
  }
  if (max > 0) /* there was a line */
    printf("Length of longest line: %d.\n", max);
    if(max > MAXLINE - 1)
      len = MAXLINE - 1; /* probably bad pradtice to reuse len */
    else
      len = max;
    printf("The first %d characters ", len);
    printf("of the first occurrence of such a line is:\n");
    printf("%s\n", longest);
  return 0;
}
/* getLine: read a line into s, return length */
int getLine(char s[],int lim)
{
  int c, i;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
