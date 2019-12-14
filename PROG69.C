// 69. Write a program to read structure elements from keyboard.

#include<stdio.h>
struct student
{
  char gender[10],name[10];
  int age;
};
int main()
{
  struct student s1;
  printf("Enter the name of student : ");
  scanf("%s",s1.name);
  printf("Enter the gender of student : ");
  scanf("%s",s1.gender);
  printf("Enter the age : ");
  scanf("%d",&s1.age);
  printf("\nThe name is %s",s1.name);
  printf("\nThe gender is %s",s1.gender);
  printf("\nThe age is %d",s1.age);
  return 0;
}
