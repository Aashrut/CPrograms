//22. Write a C program to input an integer number and check the last digit of number is even or odd using any looping structure.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    while(n>=10)
    {
        n = n % 10;
    }
    if(n%2==0)
        printf("The last digit is even.");
    else
        printf("The last digit is odd.");
    return 0;
}
