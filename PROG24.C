//24. Write a program to find out sum of first and last digit of a given number.
#include<stdio.h>
int main()
{
    int n,sum,f,l,temp;
    printf("Enter the number(less then 10 digit) : \n");
    scanf("%d",&n);
    if(n<10)
    {
      sum=n;
    }
    else
    {
      l=n%10;
      printf("The last digit is %d\n",l);
      f=n;
      while(f>10)
      {
        f=f/10;
      }
      printf("The first number is %d\n",f);
      sum=f+l;
    }
    printf("The sum of the first and last digit of the given number is %d .",sum);
    return 0;
}
