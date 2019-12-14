// 72.  Define a structure called cricket that will describe the following information:
// Player name , Team name, Batting average
// Using cricket, declare an array player with 50 elements and write a C program to read the information about all the 50 players and print team wise list
//containing names of players with their batting average.

#include<stdio.h>
#include<string.h>
struct cricket
{
  char pname[20];
  char tname[20];
  float bavg;
}temp;
int main()
{
  struct cricket player[50];
  int i,j;
  for(i=0;i<50;i++)
  {
    printf("Enter the name of the team %d : ",i+1);
    scanf("%s",player[i].tname);
    printf("Enter the name of the player %d : ",i+1);
    scanf("%s",player[i].pname);
    printf("Enter the batting average of the player %d : ",i+1);
    scanf("%f",&player[i].bavg);
  }
  for(i=0;i<50;i++)
  {
    for(j=i;j<50;j++)
    {
      if(strcmp(player[i].tname,player[j].tname)>0)
      {
        temp=player[i];
        player[i]=player[j];
        player[j]=temp;
      }
    }
  }
  j=0;
  for(i=0;i<50;i++)
  {
    if(strcmp(player[i].tname,player[j].tname)!=0 || i==0)
    {
      printf("\nName of the Team %d : %s",i+1,player[i].tname);
      j=i;
    }
    printf("\nName of Player %d : %s",i+1,player[i].pname);
    printf("\nBatting average of player %d : %f",i+1,player[i].bavg);
  }
  return 0;
}
