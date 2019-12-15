// 80. A file named data contains series of integer numbers.
// Write a program to read all numbers from a file and then write all odd numbers into the file named “odd” and write all even numbers into file named “even”.
// Display all the contents of these file on screen.

#include<stdio.h>
int main()
{
  FILE *DATA,*ODD,*EVEN;
  int i,j,n;
  printf("enter how many number you want to enter : ");
  scanf("%d",&n);
  DATA=fopen("DATA.txt","w");
  for(i=0;i<n;i++)
  {
    printf("Enter the number : ");
    scanf("%d",&j);
    if(j==-1)
    {
      break;
    }
    putw(j,DATA);
  }
  fclose(DATA);
  DATA=fopen("DATA.txt","r");
  ODD=fopen("ODD.txt","w");
  EVEN=fopen("EVEN.txt","w");
  for(i=0;(j=getw(DATA))!=EOF;i++)
  {
    if(j%2==0)
    {
      putw(j,EVEN);
    }
    else
    {
      putw(j,ODD);
    }
  }
  fclose(ODD);
  fclose(EVEN);
  ODD=fopen("ODD.txt","r");
  EVEN=fopen("EVEN.txt","r");
  DATA=fopen("DATA.txt","r");
  printf("\nThe DATA file : ");
  while((j=getw(DATA))!=EOF) {
      printf("%d ",j);
   }
   printf("\nThe ODD file : ");
   while((j=getw(ODD))!=EOF) {
      printf("%d ",j);
   }
   printf("\nThe EVEN file : ");
   while((j=getw(EVEN))!=EOF) {
      printf("%d ",j);
   }
   fclose(DATA);
   fclose(ODD);
   fclose(EVEN);
  return 0;
}
