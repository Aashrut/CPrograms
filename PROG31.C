//31. Write a program to accept start number and end number from the user and print all the numbers in the range.
#include<stdio.h>
int main()
{
    int num,i,n1,n2;
    printf("enter the start number : ");
    scanf("%d",&n1);
    printf("\nEnter the end number : ");
    scanf("%d",&n2);
    printf("The numbers in given range are as follows : \n");
    for(i=0;i<=n2-n1;i++)
    {
        num=n1+i;
        printf("%d ",num);
    }
    return 0;
}
