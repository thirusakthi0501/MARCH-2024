#include <stdio.h>
#include<math.h>
int main()
{
    int a,d=0,i,s=0,t;
    scanf("%d",&a);
    for(i=a;i>0;i=i/10)
    {
        d++;
    }
    t=n;
    while(a>0)
    {
        s=s+pow(a%10,d);
        n=n/10;
    }
    if(t==s)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
    return 0;
}
