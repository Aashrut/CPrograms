//23. Program to print sum of individual digits of a given integer using while statement.
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter the number(less than 10 digits) : \n");
    scanf("%d",&n);
    while(n>0)
    {
        sum=sum+ n%10;
        n=n/10;
    }
    printf("The sum of all individual digit is %d .",sum);
    return 0;
}
