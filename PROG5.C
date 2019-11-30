//5. Write a program to find area of triangle(a=h*b*0.5), where a = area, h = height, b = base.
#include<stdio.h>
int main()
{
	float a,h,b;
	printf("This Program calclulates the area of the Triangle.\n");
	printf("Enter the Height of the Triangle: \n");
	scanf("%f",&h);
	printf("Enter the length of the base of the Triangle: \n");
	scanf("%f",&b);
	a=0.5*h*b;
	printf("The Area of the Triangle is %.3f",a);
	return 0;
}
