//10. Write a C program to find out distance travelled by a vehicle for time (t) with equation d = u*t + 0.5*a*t^2 where u= velocity and a=acceleration.
#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("This Program calculates the Distance covered by a Vehicle in Time t.\n");
	printf("Enter the Time : \n");
	scanf("%f",&t);
	printf("Enter the Velocity : \n");
	scanf("%f",&u);
	printf("Enter the Acceleration : \n");
	scanf("%f",&a);
	d = u*t + 0.5*a*t*t;
	printf("The Distance covered by a Vehicle is %.3f\n",d);
	return 0;
}
