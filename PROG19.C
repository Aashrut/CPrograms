//19. Write a program to print sum of first n integer numbers using goto statement.
#include<stdio.h>
int main()
{
  int n,sum;
  printf("Enter the n : \n");
  scanf("%d",&n);
  goto add;
  add:
  sum=n*(n+1)/2;
  printf("the sum is : %d",sum);
  return 0;
}
