// 57. Write a program to find a chosen character from given string.

#include<stdio.h>
int main()
{
  int i,flag=0,temp;
  char c,str[100];
  printf("\nEnter the string : ");
  gets(str);
  printf("\nEnter the character you want to find : ");
  scanf("%c",&c);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==c)
    {
      flag++;
      temp=i;
    }
  }
  if(flag!=0)
  printf("\nThe position of %c is %d",c,temp);
  else
  printf("\ncharacter not found.");
  return 0;
}
