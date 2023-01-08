//Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that reverses its input a line at a time.
#include <stdio.h>

#define MAXLINE 1000

void reverse(char to[], char from[], int len);
int getLine(char s[],int lim);

int main() {
 int len;
  char line[MAXLINE];
  char reversed[MAXLINE];
  while( (len = getLine(line,MAXLINE)) > 0) {
    reverse(reversed, line, len);
    printf("%s\n",reversed);
  }
  return 0;
}

void reverse(char to[], char from[], int len) {
  int i, j;
  i = 0;
  j = 0;
  while(j < MAXLINE) {
    to[j] = '\0';
    ++j;
  }
  while(i < len) {
    to[i] = from[len-1 - i];
    ++i;
  }
}  


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

