/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main() {
  int no1, no2;
  float avarage;

  printf("Enter No 1 :");
  scanf("%d", &no1);

  printf("Enter No 2 :");
  scanf("%d", &no2);

  avarage = (no1 + no2) / 2.0;

  printf("Average is :%.2f", avarage);

  return 0;
}
