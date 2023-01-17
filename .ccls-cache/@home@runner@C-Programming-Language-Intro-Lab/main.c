//Task 2 Code:
#include <stdio.h>
int main() {
  int number;
  int is_prime;
  
  printf("Enter an integer greater than or equal to 2: ");
  scanf("%d", &number);

  printf("The following numbers are prime numbers less than %d: ", number);
  
  int i;
  int j;
  for (i = 2; i < number; i++) {
    is_prime = 1;
    for (j = 2; j < i; j++) {
      if (i % j == 0)
        is_prime = 0;
    }
    if (is_prime == 1)
      printf("%d ",i);
  }
  printf("\n");
  return 0;
}