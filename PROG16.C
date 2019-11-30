//16. Write a c program to prepare pay slip using following data : Da = 10% of basic, Hra = 7.50% of basic, Ma = 300, Pf = 12.50% of basic, Gross = basic + Da + Hra + Ma, Nt = Gross –Pf.
#include<stdio.h>
int main()
{
float basic,Da,Hra,Ma=300,Pf,Gross,Nt;
printf("Enter the Basic : \n");
scanf("%f",&basic);
Da=basic*10/100;
Hra=basic*75/1000;
Pf=basic*125/1000;
Gross=basic+Da+Hra+Ma;
Nt=Gross-Pf;
printf("Gross : %f\n",Gross);
printf("Nt : %f",Nt);
return 0;
}
