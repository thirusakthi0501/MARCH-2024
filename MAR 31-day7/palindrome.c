#include <stdio.h>

int main()
{
int a,m=0,n,i=1;
scanf("%d ",&a);
while(a>0){
    n=a%10;
    m=(m*10)+n;
    a/=10;
}
if(a==m)
printf("palindrome");
else
printf("No");
}
