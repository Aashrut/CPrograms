//27. Write a C program to find factorial of a given number.
#include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the n : ");
    scanf("%d",&n);
    if(n==0)
    f=1;
    else
    {
      for(i=n;i>=1;i--)
      {
        f=f*i;
      }
    }
    printf("The factorial of a number %d is %d .",n,f);
    return 0;
}
