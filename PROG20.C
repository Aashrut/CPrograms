//17. Write a program to check the entered character is vowel or not.
#include<stdio.h>
int main()
{
 char c;
 printf("Enter the character c : \n");\
 scanf("%c",&c);
 switch(c)
 {
  case 'a':
  printf("the given character is vowel.");
  break;
  case 'e':
  printf("the given character is vowel.");
  break;
  case 'i':
  printf("the given character is vowel.");
  break;
  case 'o':
  printf("the given character is vowel.");
  break;
  case 'u':
  printf("the given character is vowel.");
  break;
  default:
  printf("the given character is not vowel.");
 }
 return 0;
}
