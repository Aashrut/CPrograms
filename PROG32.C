//32. Write a program to calculate average and total marks of 5 students for 3 subjects.
#include<stdio.h>
int main()
{
    int i;
    float a[5][3],total1,total2,total3,total4,total5;
    float avg1,avg2,avg3,avg4,avg5;
    printf("Enter the marks as follows.\n");
    for(i=0;i<=4;i++)
    {
      printf("Enter the marks of 3 subjects at a time : \n");
      scanf("%f %f %f",&a[i][0],&a[i][1],&a[i][2]);
    }
    total1=a[0][0]+a[0][1]+a[0][2];
    total2=a[1][0]+a[1][1]+a[1][2];
    total3=a[2][0]+a[2][1]+a[2][2];
    total4=a[3][0]+a[3][1]+a[3][2];
    total5=a[4][0]+a[4][1]+a[4][2];
    avg1=total1/3;
    avg2=total2/3;
    avg3=total3/3;
    avg4=total4/3;
    avg5=total5/3;
    printf("\nThe total and the average marks of the student 1 is: %.3f and %.3f ",total1,avg1);
    printf("\nThe total and the average marks of the student 2 is: %.3f and %.3f ",total2,avg2);
    printf("\nThe total and the average marks of the student 3 is: %.3f and %.3f ",total3,avg3);
    printf("\nThe total and the average marks of the student 4 is: %.3f and %.3f ",total4,avg4);
    printf("\nThe total and the average marks of the student 5 is: %.3f and %.3f \n",total5,avg5);
    return 0;
}
