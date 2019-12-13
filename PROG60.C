// 60. Write a program to reverse string.

#include<stdio.h>
int main()
{
  int i,j,length;
  char rev[100],str[100];
  printf("\nEnter the string : ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    length=i;
  }
  for(i=length,j=0;i>=0;j++,i--)
  {
    rev[j]=str[i];
  }
  rev[j]='\0';
  puts(str);
  puts(rev);
  return 0;
}
