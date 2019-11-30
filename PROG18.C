//18. Write a menu-driven program for scientific calculator using switch-case statement. (add, sub, mul, div, module, square, square root, power, log)
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  float a,b; char c; float p; int result;
  printf("This program will calculate addition, substraction, multiplication, division, mod,square, square root, power, log of two integers.\n");
  printf("Enter the two number a and b : ");
  scanf("%f %f",&a,&b);
  printf("Enter the arithmatic sign from following sign (+,-,*,/,%,square=x,square root=y,power=z,log=w) \n Enter sign:");
  scanf("%c",&c);
  c=getche();
  switch(c)
  {
    case '+':
    printf("The answer is : %f",a+b);
    break;
    case '-':
    printf("The answer is : %f",a-b);
    break;
    case '*':
    printf("The answer is : %f",a*b);
    break;
    case '/':
    printf("The answer is : %f",a/b);
    break;
    case '%':
    result=a/b;
    if(a<b)
    printf("The answer is : 0");
    else
    printf("The answer is : %f",a-result*b);
    break;
    case 'x':
    printf("The answer for a is: %f and answer for b is : %f",a*a,b*b);
    break;
    case 'y':
    printf("The answer for a is: %f and answer for b is: %f",sqrt(a),sqrt(b));
    break;
    case 'z':
    printf("\nEnter the power : ");
    scanf("%f",&p);
    printf("The answer for %.3f^%.3f is : %.3f and answer for %.3f^%.3f is : %.3f",a,p,pow(a,p),b,p,pow(b,p));
    break;
    case 'w':
    printf("log(a) is : %f and log(b) is : %f",log(a),log(b));
    break;
    default:
    printf("Invalid Input");
  }
  return 0;
}
