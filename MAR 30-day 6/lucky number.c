#include <stdio.h>
int main()
{
int a,m,n=0;
scanf("%d",&a);
while(a>0){
m=a%10;
if(m%2!=0){
n+=m;
}
a/=10;
}
if(n%2==0)
printf("lucky");
else
printf("no");
}
