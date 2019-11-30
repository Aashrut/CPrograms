//29. Write a program that accept a string and count the number of space character, tab character, new line character, and any other characters.
#include<stdio.h>
int main()
{
    char str[30];
    int i=0,sc=0,nlc=0,tc=0,osc=0;
    printf("Enter the string (when you want to end,just type ! and press enter): \n");
    while((str[i]=getchar())!='!')
    {
        switch(str[i])
        {
        case ' ':
            sc++;
            break;
        case '\n':
            nlc++;
            break;
        case '\t':
            tc++;
            break;
        default:
            osc++;
            break;
        }
    }
    printf("The total number of space character is %d\n",sc);
    printf("The total number of new line character is %d\n",nlc);
    printf("The total number of tab character is %d\n",tc);
    printf("The total number of other character is %d\n",osc);
    return 0;
}
