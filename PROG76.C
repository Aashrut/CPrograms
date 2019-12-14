// 76. Write a program to print the address of character and the character of string using pointer.

#include<stdio.h>
int main()
{
  int i;
  char *c,str[20];
  printf("Enter the string : ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    c=&str[i];
    printf("\nThe character : %c & The position : %u",*c,c);
  }
  return 0;
}
