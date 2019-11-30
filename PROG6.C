//6. Write a program to calculate simple interest (i = (p*r*n)/100 ) where i = Simple interest, p = Principal amount, r = Rate of interest, n = Number of years.
#include<stdio.h>
int main()
{
	float p,r,n,i;
	printf("This Program calculates the Simple Interest.\n");
	printf("Enter the Principal Amount: \n");
	scanf("%f",&p);
	printf("Enter the Rate of Interest: \n");
	scanf("%f",&r);
	printf("Enter the Number of Years: \n");
	scanf("%f",&n);
	i=p*r*n/100;
	printf("The Simple Interest is %.3f",i);
	return 0;
}
