// 51. Write a C program to read and store the roll no and marks of 20 students using array.

#include<stdio.h>
int main()
{
    int m[20][2],i;
    for(i=0;i<20;i++)
    {
        printf("Enter the Roll number and marks : ");
        scanf("%d %d",&m[i][0],&m[i][1]);
    }
    printf("The given data are : \n");
    printf("Roll No. Marks\n");
    for(i=0;i<20;i++)
    {
        printf("%d        %d\n",m[i][0],m[i][1]);
    }
    return 0;
}
