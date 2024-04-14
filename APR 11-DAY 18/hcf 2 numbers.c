#include <stdio.h>

int main()
{
    int q,w;
    
    scanf("%d %d",&q,&w);
    
    int min = (q<w) ? q :w;
    int hcf=1;
    for(int i=1; i<=min; i++)
    {
        if(q%i==0 && w%i==0)
        {
            hcf = i;
        }
    }

    printf(" %d ", hcf);

    
    return 0;
}
