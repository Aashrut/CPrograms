//12. Write a program to read marks for a single subject of a student. If marks < 36, output the result as 'Fail' otherwise 'Pass'.
#include<stdio.h>
int main()
{
	int a;
	printf("This Program will decide that you are pass or fail.\n");
	printf("Enter your marks : \n");
	scanf("%d",&a);
	if (a<36)
	    printf("You are Failed.");
	else
	    printf("You are Passed.");
	return 0;
}
