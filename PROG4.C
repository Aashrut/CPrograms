//4. Make Basic Calculator Program
#include<stdio.h>
int main()
{
	float a, b, c1, c2, c3, c4;
	printf("This Program will give you the all basic calculations of given numbers.\n");
	printf("Enter the First Number: \n");
	scanf("%f",&a);
	printf("Enter the Second Number: \n");
	scanf("%f",&b);
	c1=a+b; c2=a-b; c3=a*b; c4=a/b;
	printf("The Sum of Numbers is %.3f\n",c1);
	printf("The Substraction of the Numbers is %.3f\n",c2);
	printf("The multiplication of the Numbers is %.3f\n",c3);
	printf("The division of the Numbers is %.3f\n",c4);
	return 0;
}
