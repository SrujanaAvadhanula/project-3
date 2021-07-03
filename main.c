#include <stdio.h>

int main(void)
 {
  int num_1=10, num_2, sum;
  num_2=20;
  sum= num_1 + num_2;
  num_1=45;
  num_2=55;
  sum= num_1 + num_2;
  printf("Num_1 = %d\nNum_2 = %d\n", num_1, num_2);
  printf("Sum = %d\n\n\n", sum);
  return 0;
}