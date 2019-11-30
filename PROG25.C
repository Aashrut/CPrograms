//25. Write a program to check whether the given number is prime or not.
#include<stdio.h>
int main()
{
    int i,temp,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp=0;
    if(n<=1)
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
      if(temp==0)
      printf("\nThe given number is prime.");
      else
      printf("\nThe given number is not a prime.");
    }
    return 0;
}
