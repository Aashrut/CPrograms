//21. Write a C program to find out the Maximum and Minimum number from given 10 numbers using for, while loop.
#include<stdio.h>
int main()
{
    int n=10,i,mini,maxi,a[10];
    printf("Enter the 10 numbers.\n");
    for(i=0;i<n;i++)
    {
        printf("enter the number : ");
        scanf("%d",&a[i]);
    }
    printf("The given numbers are as follows : \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    mini=maxi=a[0];
    i=0;
    while(i<n)
    {
        if(a[i]<mini)
            mini=a[i];
        if(a[i]>maxi)
            maxi=a[i];
        i++;
    }
    printf("\nThe maximum number is %d .",maxi);
    printf("\nThe minimum number is %d .",mini);
    return 0;
}
