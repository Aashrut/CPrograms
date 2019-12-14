// 79. Write a program to write a string in file.

#include<stdio.h>
int main()
{
  FILE *f1;
  char str[30];
  printf("Enter the string : ");
  gets(str);
  f1 = fopen("f1.txt","w");
  fputs(str,f1);
  fclose(f1);
  return 0;
}
