#include <stdio.h>

int main() {

  int a, b, sum, number_of_digits;

  while ( scanf("%d %d", &a, &b) != EOF ) {
    sum = a + b;
    number_of_digits = 1;

    while ( 1 ) {
      sum /= 10;
      if ( sum != 0 ) {
	number_of_digits++;
      }
      else {
	printf("%d\n", number_of_digits);
	break;
      }
    }
  }

  return 0;
}
