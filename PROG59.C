// 59. Write a program to delete a character in given string.

#include<stdio.h>
int main()
{
  int i,j=0,length,temp;
  char c,str[100],newstr[100];
  printf("\nEnter the string : ");
  gets(str);
  printf("\nEnter the character you want to delete : ");
  scanf("%c",&c);
  getchar();
  for(i=0;str[i]!='\0';i++)
  {
    length=i;
  }
  for(i=0;i<=length;i++)
  {
    if(str[i]!=c)
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
