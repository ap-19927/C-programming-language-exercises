//Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t , each backspace by \b , and each backslash by \\ . This makes tabs and backspaces visible in an unambiguous way.
#include <stdio.h>
#include <curses.h>
int main() {
  int c;
  initscr();
  while ((c = getch()) != 4) {
    if(c == 27) {
      printf("\\");
      //printf("b");
    }
    else
      printf("%c",c);
  } 
  endwin();
  return 0;
}
