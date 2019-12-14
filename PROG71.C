// 71. Define a structure data type called time_struct containing three member‟s - integer hour, integer minute and integer second.
// Develop a program that would assign values to the individual number and display the time in the format: (16 : 40 : 51).

#include<stdio.h>
struct time_struct
{
  int hour,minute,second;
};
int main()
{
  struct time_struct t1;
  printf("Enter the hours (in 24 hour format) : ");
  scanf("%d",&t1.hour);
  printf("Enter the minutes : ");
  scanf("%d",&t1.minute);
  printf("Enter the seconds : ");
  scanf("%d",&t1.second);
  printf("\nThe time in format (hh:mm:ss) is %02d : %02d : %02d",t1.hour%24,t1.minute%60,t1.second%60);
  return 0;
}
