//8. Write a C program to enter a distance into kilometer and convert it into meter, feet, inches and centimeter.
#include<stdio.h>
int main()
{
	float km,m,ft,in,cm;
	printf("This Program Converts the Distance from kilometer to meter, feet, inch and centimeter.\n");
	printf("Enter The Distance in Kilometer: \n");
	scanf("%f",&km);
	m = km*1000;
	ft = km*3280.8399;
	in = km*39370.0787;
	cm = km*100000;
	printf("The Distance in meter : %.3f\n",m);
	printf("The Distance in feet : %.3f\n",ft);
	printf("The Distance in inch : %.3f\n",in);
	printf("The Distance in centimeter : %.3f\n",cm);
	return 0;
}
