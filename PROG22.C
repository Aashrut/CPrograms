//22. Write a C program to input an integer number and check the last digit of number is even or odd using any looping structure.
#include<stdio.h>
int main()
{
    int n,temp;
    printf("Enter the number (number should be more than 2 digits): \n");
    scanf("%d",&n);
    temp=n/10;
    while(n>=1)
    {
        n=n-temp*10;
    }
    if(n%2==0)
        printf("The last digit is even.");
    else
        printf("The last digit is odd.");
    return 0;
}
