#include<stdio.h>

int main() {
  int a, b, c, aa, bb, cc;
  int i, n;

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &a, &b, &c);

    aa = a * a;
    bb = b * b;
    cc = c * c;

    if ( (aa == bb + cc)
	 || (bb == cc + aa)
	 || (cc == aa + bb) ) {
      printf("YES\n");
    }
    else {
      printf("NO\n");
    }
  }

  return 0;
}
