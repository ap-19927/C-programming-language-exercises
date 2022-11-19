//Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion.
#include <stdio.h>
#define LOWER 0 /* lower limit of table */
#define UPPER 300 /* upper limit */
#define STEP 20 /* step size */
float fahrToCel(float fahr);
float fahrToCel(float fahr) {
  return (5.0/9.0) * (fahr-32.0);
}
/* print Fahrenheit-Celsius table */
int main() {
    float fahr;
    printf("Fahrenheit->Celsius\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
      printf("%5.0f %13.1f\n", fahr, fahrToCel(fahr));
    }
}
