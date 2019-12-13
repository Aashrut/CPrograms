// 61. Write a program to convert string into upper case.

#include<stdio.h>
int main()
{
  int i,j=0,length;
  char str[100],newstr[100];
  printf("enter the string : ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    length=i;
  }
  for(i=0;i<=length;i++)
  {
    if(str[i]>=97 && str[i]<=122)
    {
      newstr[j]=str[i]-32;
      j++;
    }
    else
    {
      newstr[j]=str[i];
      j++;
    }
  }
  newstr[j]='\0';
  puts(str);
  puts(newstr);
  return 0;
}
