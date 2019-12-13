// 56. Write a program to reverse a number.

#include<stdio.h>
int main()
{
  int n,temp,rev=0;
  printf("Enter the number : ");
  scanf("%d",&n);
  while(n!=0)
  {
    temp=n%10;
    rev=rev*10 +temp;
    n=n/10;
  }
  printf("The reversed number is : %d",rev);
  return 0;
}
