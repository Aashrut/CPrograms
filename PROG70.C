// 70. Define a structure type struct personal that would contain person name, date of joining and salary using this structure to read this information of 5 people and print the same on screen.

#include<stdio.h>
struct personal
{
  char name[20];
  char joindate[10];
  int salary;
};
int main()
{
  struct personal person[5];
  int i;
  for(i=0;i<5;i++)
  {
    printf("Enter the name of the person %d : ",i+1);
    scanf("%s",person[i].name);
    printf("Enter the joining date (in this format dd/mm/yyyy) of the person %d : ",i+1);
    scanf("%s",person[i].joindate);
    printf("Enter the salary of the person %d : ",i+1);
    scanf("%d",&person[i].salary);
  }
  for(i=0;i<5;i++)
  {
    printf("\nThe name of the person %d : %s",i+1,person[i].name);
    printf("\nThe joining date (in this format ddmmyyyy) of the person %d : %s",i+1,person[i].joindate);
    printf("\nThe salary of the perosn %d : %d",i+1,person[i].salary);
  }
  return 0;
}
