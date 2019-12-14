// 73. Design a structure student_record to contain name, branch and total marks obtained. Develop a program to read data for 10 students in a class and print them.

#include<stdio.h>
struct student_record
{
  char name[20];
  char branch[20];
  int tmarks;
};
int main()
{
  struct student_record s[10];
  int i;
  for(i=0;i<10;i++)
  {
    printf("Enter the name of student %d : ",i+1);
    scanf("%s",s[i].name);
    printf("Enter the branch of student %d : ",i+1);
    scanf("%s",s[i].branch);
    printf("Enter the total marks of student %d : ",i+1);
    scanf("%d",&s[i].tmarks);
  }
  for(i=0;i<10;i++)
  {
    printf("\nThe name of the student %d : %s",i+1,s[i].name);
    printf("\nThe branch of the student %d : %s",i+1,s[i].branch);
    printf("\nThe total marks of the student %d : %d",i+1,s[i].tmarks);
  }
  return 0;
}
