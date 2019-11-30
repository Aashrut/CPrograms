//36. Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!.
#include<stdio.h>
int main()
{
    double i,n,fact=1,sum=0;
    printf("enter the n : ");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
      fact=fact*i;
      sum=sum+(1/fact);
    }
    printf("\nThe sum is %.3lf",sum);
    return 0;
}
