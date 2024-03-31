#include <stdio.h>
int main()
{
    int q,s=0,p=1,r=0;
    scanf("%d",&q);
    printf("%d ",s);
    printf("%d ",p);
    for(int e=3;e<=q;e++)
    {
        r=s+p;
        printf("%d ",r);
        s=p;
        p=r;
    }
}
