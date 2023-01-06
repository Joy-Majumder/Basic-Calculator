#include <stdio.h>

// Basic Calculator

int main() {
  int a;
  printf(" Enter the value of A : \n");
  scanf("%d", &a);

  int b;
  printf(" Enter the value of B : \n");
  scanf("%d", &b);

  printf("output : \n");
  int t, t1, t2;
  t = a + b;
  printf("Ans is (+) : %d \n", t);
  t1 = a - b;
  printf("Ans is (-) : %d \n", t1);
  t2 = a * b;
  printf("Ans is (*) : %d \n", t2);
  float t3;
  t3 = a / b;
  printf("Ans is (/) : %f \n", t3);
  return 0;
}