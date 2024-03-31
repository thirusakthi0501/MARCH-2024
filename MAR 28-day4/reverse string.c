#include <stdio.h>
#include<string.h>
int main()
{
  char q[10000];
scanf("%s",q);
for(int e=strlen(q)-1;e>=0;e--){
printf("%c",q[e]);
}
}
