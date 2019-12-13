// 62. Write a program that defines a function to add first n numbers.

#include<stdio.h>
void number(int n);
int main()
{
  int n;
  printf("Enter how many numbers you want to add : ");
  scanf("%d",&n);
  number(n);
  return 0;
}
void number(int n)
{
  int sum;
  sum=n*(n+1)/2;
  printf("sum is %d",sum);
}
