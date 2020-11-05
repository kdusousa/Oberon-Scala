#include <stdio.h>
#include <stdbool.h>

void main() {
  int a, b;

  scanf("%d", &a);
  scanf("%d", &b);
  if (a >= b) {
    printf("%d\n", a);
  }
  else {
    printf("%d\n", b);
}
}