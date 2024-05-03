#include <stdio.h>

int main()
{
    int a[100], f[100];
    int n, i, j, ctr;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        f[i] = -1;
    }
    for (i = 0; i < n; i++)
    {
        ctr = 1;
        for (j = i + 1; j < n; j++)                                 // 3  4  5  3  4  6  7  5  3
        {                                                           // 3  2  2  0  0  1  1  0  0
            if (a[i] == a[j])
            {
                ctr++; 
                f[j] = 0; 
            }
        }
        if (f[i] != 0)
        {
            f[i] = ctr;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (f[i] != 0)
        {
            printf("%d occurs %d times\n", a[i], f[i]);
        }
		return 0;
    }
}
