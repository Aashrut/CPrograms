//34. Write a program to evaluate the series 1^2+2^2+3^2+……+n^2.
#include<stdio.h>
int main()
{
  int n,sum;
  printf("Enter the n : ");
  scanf("%d",&n);
  sum=n*(n+1)*(2*n+1)/6;
  printf("\nThe sum is : %d ",sum);
  return 0;
}
