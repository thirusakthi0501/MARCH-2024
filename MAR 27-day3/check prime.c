#include <stdio.h>
#include<math.h>
int main()
{
    int q,f=0;
    scanf("%d",&q);
    for(int e=2;e<=sqrt(q);e++)
    {
        if(q%e==0)
        {
            f=1;
        }
    }
    if(q==1)
    {
        printf("Neither prime nor composite");
    }
    else if(f==1)
    {
        printf("Not a prime number");
    }
    else
    {
        printf("Prime number");
    }
}
