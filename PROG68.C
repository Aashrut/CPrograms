// 68. Write a function that will scan a character string passed as an argument and convert all lowercase character into their uppercase equivalents.

#include<stdio.h>
void Upp(char str[]);
int main()
{
  char str[100];
  printf("Enter the string : ");
  gets(str);
  printf("\nThe lowercase string is %s",str);
  Upp(str);
  printf("\nThe uppercase string is %s",str);
  return 0;
}
void Upp(char str[])
{
  int i,length;
  for(i=0;str[i]!='\0';i++)
  {
    length=i;
  }
  for(i=0;i<=length;i++)
  {
    if(str[i]>=97 && str[i]<=122)
    {
      str[i]=str[i]-32;
    }
  }
}
