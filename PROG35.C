//35. Write a C program to find 1+1/2+1/3+1/4+....+1/n.
#include<stdio.h>
int main()
{
    double n,i,sum=0;
    printf(" enter the n : ");
    scanf("%lf",&n);
    for(i=1;i<=n;i++)
    {
      sum = sum + (1/i);
    }
    printf("\n The sum is : %.3lf",sum);
    return 0;
}
