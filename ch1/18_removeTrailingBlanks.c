//Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.

#include <stdio.h>
#define MAXLINE 1000

int removeTrailingBlanks(char s[],int lim);
void copy(char to[], char from[]);
/* print the longest input line */
int main(void) {

  int len; /* current line length */
  char line[MAXLINE]; /* current input line */
  char blankless[MAXLINE];
  while ((len = removeTrailingBlanks(line, MAXLINE)) > 0) {
    copy(blankless,line);
    printf("%s\n", blankless);
  }
  return 0;
}

int removeTrailingBlanks(char s[],int lim)
{
  int c, i, last_letter;
  for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
    s[i] = c;
    if(c!= ' ' && c!= '\t')
      last_letter = i;
  }
  s[last_letter+1] = '\0';

  return last_letter+1;
}
/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
  int i;
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}
