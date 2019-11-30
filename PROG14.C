//14. Write a C program to check whether the entered character is capital, small letter, digit or any special character.
#include<stdio.h>
#include<ctype.h>
int main()
{
  char c;
  printf("This Program will check that given character is capital or small or digit or any special character.\n");
  printf("Enter the character : \n");
  scanf("%c",&c);
  if(isupper(c))
    printf("The given character is Capital.");
  else if(islower(c))
    printf("The given character is Smaller.");
  else if(isdigit(c))
    printf("The given character is Digit.");
  else
    printf("The given number is Special Character.");
  return 0;
}
