#include <stdio.h>

int main() {
  int i, input;
  int max1 = 0, max2 = 0, max3 = 0;

  for (i = 0; i < 10; i++) {
    scanf("%d", &input);
    if ( max1 < input ) {
      max3 = max2;
      max2 = max1;
      max1 = input;
    }
    else if ( max2 < input ) {
      max3 = max2;
      max2 = input;
    }
    else if ( max3 < input ) {
      max3 = input;
    }
  }

  printf("%d\n", max1);
  printf("%d\n", max2);
  printf("%d\n", max3);

  return 0;
}
