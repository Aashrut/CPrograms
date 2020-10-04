/* Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string. Print ten space-separated integers in a single line denoting the frequency of each digit from 0 to 9.

sample input 1: a11472o5t6
sample output 1: 0 2 1 0 1 1 1 1 0 0 

sample input 2: lw4n88j12n1
sample output 2: 0 2 1 0 1 0 0 0 2 0 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int ar[10],i;
    for(i=0;i<10;i++)
    {
        ar[i]=0;
    }
    char str[1000];
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='0') ar[0]++;
        if(str[i]=='1') ar[1]++;
        if(str[i]=='2') ar[2]++;
        if(str[i]=='3') ar[3]++;
        if(str[i]=='4') ar[4]++;
        if(str[i]=='5') ar[5]++;
        if(str[i]=='6') ar[6]++;
        if(str[i]=='7') ar[7]++;
        if(str[i]=='8') ar[8]++;
        if(str[i]=='9') ar[9]++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
