// 77. Write a program to access elements using pointer.

#include<stdio.h>
int main()
{
  int i;
  char *x,str[30];
  printf("Enter the string : ");
  gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    x=&str[i];
    printf("\nThe element : %c & The position : %d",*x,i);
  }
  return 0;
}
