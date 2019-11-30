//37. Write a program to evaluate the series sum=1-x+x^2/2!-x^3/3!+x^4/4!......-x^9/9!.
#include<stdio.h>
#include<math.h>
int main()
{
    double i,x,fact=1,sum=1;
    printf("enter the x : ");
    scanf("%lf",&x);
    for(i=1;i<=9;i++)
    {
      fact=fact*i;
      sum=sum+(pow(x,i)*pow(-1,i)/fact);
    }
    printf("\nThe sum is %.3lf",sum);
    return 0;
}
