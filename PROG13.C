//13.Write a program to read three numbers from keyboard and find out maximum out of these three.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("This Program finds the maximum integer number.\n");
	printf("Enter the three Number : \n");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b)
	    {
	    	if (a>c)
	    	    printf("%d is the maximum.",a);
	    	else
	    	    printf("%d is the maximum.",c);
	    }
	else
	    {
	    	if (c<b)
	    	    printf("%d is the maximum.",b);
	    	else
	    	    printf("%d is the maximum.",c);
	    }
	return 0;
}
