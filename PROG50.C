// 50. Write a program to print patterns as given below:
// AAAAA
// BBBB
// CCC
// DD
// E

#include<stdio.h>
int main()
{
    int n;char i,j;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(i=65;i<=65+n-1;i++)
    {
        for(j=65+n;j>=i+1;j--)
        {
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}
