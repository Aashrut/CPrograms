//9. Write a program to compute Fahrenheit from centigrade (f=1.8*c +32)
#include<stdio.h>
int main ()
{
	float c,f;
	printf("This Program computes Fahrenhit from Centigrade.\n");
	printf("Enter the Centigrade Value : \n");
	scanf("%f",&c);
	f=1.8*c+32;
	printf("The Fahrenhit value is %.3f\n",f);
	return 0;
}
