//Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.
#include <stdio.h>
int main() {
  int t;
  while (t = (getchar() != EOF))
    printf("%d\n",t); //1
  printf("%d\n",t); //0
}
