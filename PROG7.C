//7. Write a C program to interchange two numbers.
#include<stdio.h>
int main()
{
	int  a,b,x;
	printf("This program interchanges the given two numbers.\n");
	printf("Enter the First Number a: \n");
	scanf("%d",&a);
	printf("Enter the Second Number b: \n");
	scanf("%d",&b);
	printf("Before Interchange, a=%d, b=%d\n",a,b);
	x=a;
	a=b;
	b=x;
	printf("After Interchange, a=%d, b=%d",a,b);
	return 0;
}
