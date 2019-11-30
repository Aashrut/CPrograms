//17. Write a C program to read no 1 to 7 and print relatively day Sunday to Saturday.
#include<stdio.h>
int main()
{
  int x;
  printf("enter x : \n");
  scanf("%d",&x);
  switch(x)
  {
    case 1:
    printf("It's Sunday.");
    break;
    case 2:
    printf("It's Monday.");
    break;
    case 3:
    printf("It's Tuesday.");
    break;
    case 4:
    printf("It's Wednesday.");
    break;
    case 5:
    printf("It's Thursday.");
    break;
    case 6:
    printf("It's Friday.");
    break;
    case 7:
    printf("It's Saturday.");
    break;
  }
  return 0;
}
