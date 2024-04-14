#include<stdio.h>
void main()
{
    int q, w, gcd, r, n, d;
    scanf("%d %d", &q, &w);
    if (q > w)
    {
        n = q;
        d= w;
    }
    else
    {
        n= w;
        d = q;
    }
    r = n % d;
    while (r != 0)
    {
        n = d;
        d = r;
        r = n % d;
    }
    gcd = d;
    printf("%d ", gcd);
}
