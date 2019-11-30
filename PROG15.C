//15. Write a program to read marks from keyboard and your program should display equivalent grade according to following table. Marks Grade 100 -80 Distinction 79 -60 First Class 59 -40 Second Class < 40 Fail.
#include<stdio.h>
int main()
{
int a;
printf("Enter Your marks : \n");
scanf("%d",&a);
if( (a<=100) && (a>=80) )
printf("Distinction");
else if( (a<80) && (a>=60) )
printf("First Class");
else if( (a<59) && (a>=40) )
printf("Second Class");
else if(a<40)
printf("Fail");
return 0;
}
