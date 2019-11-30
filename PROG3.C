//3. Print Area Of circle
#include <stdio.h>
int main()
{
	float r, pi=3.14, a;
	printf("This Program will let you calculate the area of the circle.\n");
	printf("Enter the radius of the circle: \n");
	scanf("%f",&r);
	a=pi*r*r;
	printf("The Area of The Circle is %.3f.",a);
	return 0;
}
