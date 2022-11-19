// Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input.
#include <stdio.h>
#include <limits.h>
int main() {
	int c,j;
	int charFreq[CHAR_MAX];

	for (c = 0; c < CHAR_MAX+1; ++c) //initialise charFreq
		charFreq[c] = 0;

	while ((c = getchar()) != EOF) { //count frequencies
		++charFreq[c];
	}
	printf("\n");

	for(c = 0; c < CHAR_MAX+1; ++c) {
    // printf("%c %d",i,charFreq[i]);
    printf("%c ",c);
    for(j = 0; j < charFreq[c]; ++j)
      printf("*");
    printf("\n");
	}
}
