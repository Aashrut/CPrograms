//30. Write a C program to find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
int main()
{
    float sum,avg;
    int n,i;
    printf("This program will calculate the sum and average of the numbers.\n");
    printf("Enter the number of integers you want to calculate : ");
    scanf("%d",&n);
    float a[n];
    for(i=0;i<=n-1;i++)
    {
      printf("\nEnter the number : ");
      scanf("%f",&a[i]);
    }
    printf("The given numbers are as follows : \n");
    for(i=0;i<=n-1;i++)
    {
      printf("%.3f ",a[i]);
    }
    sum=0;
    for(i=0;i<=n-1;i++)
    {
      sum=sum+a[i];
    }
    printf("\nThe sum of the given numbers is %.3f .\n",sum);
    avg=sum/n;
    printf("The average of the given numbers is %.3f .",avg);
    return 0;
}
