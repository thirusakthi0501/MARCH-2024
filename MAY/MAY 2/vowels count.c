. Accept a string and count number of vowels in it.
#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
char q[100],z;
int w=0;
scanf("%s",q);
for(int e=0;e<strlen(q);e++){
    z=tolower(q[e]);
    if(z=='a'||z=='e'||z=='i'||z=='o'||z=='u')
    w+=1;
}
printf("%d ",w);
}
