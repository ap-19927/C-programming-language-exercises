// Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
#include <stdio.h>
#define MAXWORDLENGTH 10
/* count digits, white space, others */
int main() {
	int c,i,j,count,maxFreq;
	int wordLength[MAXWORDLENGTH];
	count = maxFreq = 0;

	for (i = 0; i < MAXWORDLENGTH; ++i)
		wordLength[i] = 0;

	while ((c = getchar()) != EOF) {
		if(c == ' ') {
			++wordLength[count-1];
			count = 0;
		}
		else {
			++count;
    }
	}
	if(count!=0) {
		++wordLength[count-1];
	}

	printf("\n");

	//finds max frequency
	for(i=0; i<MAXWORDLENGTH; ++i) {
		if(wordLength[i] > maxFreq)
			maxFreq = wordLength[i];
	}

	//prints bars vertical
	for (i=0; i<maxFreq; ++i) { //rows (frequency)
		for (j = 0; j < MAXWORDLENGTH; ++j) { //columns (word length)
			printf(" ");
			if(wordLength[j] >= maxFreq-i)
				printf("x");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (j = 0; j < MAXWORDLENGTH; ++j)
		printf(" %d", j+1);
	printf("\n");
}
