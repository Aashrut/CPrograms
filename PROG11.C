//11. Write a C program to find that the accepted number is Negative, or Positive or Zero.
#include<stdio.h>
int main()
{
	float a;
	printf("This Program finds that the given number is Negative or Positive or Zero.\n");
	printf("Enter the Number : \n");
	scanf("%f",&a);
	if (a<0)
	    printf("The Number is Negative.");
	else if (a==0)
	    printf("The Number is Zero.");
	else if (a>0)
	    printf("The Number is Positive.");
	return 0;
}
