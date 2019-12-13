// 58. Write a program to replace a character in given string.

#include<stdio.h>
int main()
{
    int i,length;
    char c1,c2,str[100];
    printf("Enter the  string : ");
    gets(str);
    printf("Enter the character you want to replace : ");
    scanf("%c",&c1);
    getchar();
    printf("Enter the character you want to replace with above character : ");
    scanf("%c",&c2);
    for(i=0;str[i]!='\0';i++)
    {
        length=i;
    }
    for(i=0;i<=length;i++)
    {
        if(str[i]==c1)
        {
            str[i]=c2;
        }
    }
    puts(str);
    return 0;
}
