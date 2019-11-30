//28. Write a program to generate first n number of Fibonacci series.
#include<stdio.h>
int main()
{
    int i,t1=0,t2=1,temp,n;
    printf("Enter the number n : ");
    scanf("%d",&n);
    printf("\nThe Fibonacci series is : \n");
    for(i=0;i<n;i++)
    {
      if(i<=1)
      temp=i;
      else
      {
        temp=t1+t2;
        t1=t2;
        t2=temp;
      }
      printf("%d ",temp);
    }
    return 0;
}
