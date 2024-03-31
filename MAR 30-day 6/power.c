#include <stdio.h>
int main()
{
int a,m,n=1;
scanf("%d %d",&a,&m);
while(m>=1){
n*=a;
m--;
}
printf("%d ",n);
}
