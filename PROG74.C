// 74. Write a program to print address of variable using pointer.

#include<stdio.h>
int main()
{
  int x=5;
  int *ptr;
  ptr=&x;
  printf("The address is %u",ptr);
  return 0;
}
