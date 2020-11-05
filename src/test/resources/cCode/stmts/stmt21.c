#include <stdio.h>
#include <stdbool.h>

void main() {
  int a;

  scanf("%d", &a);
  if (a < 10) {
    if (a == 2) {
      printf("%d\n", a);
    }
    else if (a == 3) {
      printf("%d\n", a);
    }
    else if (a == 5) {
      printf("%d\n", a);
    }
    else if (a == 7) {
      printf("%d\n", a);
    }
    else {
      printf("%d\n", 1);
    }
  }
  else {
    printf("%d\n", 0);
}
}