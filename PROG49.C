// 49. Write a program to print patterns as given below:
// A
// AB
// ABC
// ABCD
// ABCDE

#include<stdio.h>
int main()
{
    int n;char i,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=65;i<=65+n-1;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}
