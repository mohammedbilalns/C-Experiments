#include "stdio.h"

int main() {

  int n = 5;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (i == 1 || i == n || i == (n + 1) / 2 || j == 1) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}