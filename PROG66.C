// 66. Write a program to find factorial of a number using recursion.

#include<stdio.h>
int fact(int n);
int main()
{
  int n;
  printf("Enter the number : ");
  scanf("%d",&n);
  printf("The factorial of number %d is %d",n,fact(n));
  return 0;
}
int fact(int n)
{
  if(n==1)
  return 1;
  else
  return n*fact(n-1);
}
