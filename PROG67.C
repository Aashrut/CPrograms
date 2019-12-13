// 67. Write a C program using global variable, static variable.

#include<stdio.h>
int fact();
int n;
int main()
{
  printf("Enter the n : ");
  scanf("%d",&n);
  printf("The factorial is %d",fact(n));
  return 0;
}
int fact()
{
  static int result=1;
  if(n==1)
  return result;
  else
  result= n--*fact();
}
