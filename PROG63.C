// 63. Write a function in the program to return 1 if number is prime otherwise return 0.

#include<stdio.h>
int prime(int n);
int main()
{
  int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(prime(n)==1)
    {
      printf("The number %d is prime.",n);
    }
    else
    {
      printf("The number %d is not prime.",n);
    }
    return 0;
}
int prime(int n)
{
  int temp=0,i;
  if(n==1)
      printf("\nThe given number is not a prime number or any other.");
  else
  {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
          temp=1;
          break;
        }
    }
  }
  if(temp==0)
    return 1;
  else
    return 0;
}
