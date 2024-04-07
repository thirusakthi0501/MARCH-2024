#include <stdio.h>
#include <math.h> 
int main()  
{  
    int i=0, b, d= 0, rem;  
    scanf("%d ",&b);
    while(b>0)  
    {  
        rem = b% 10;  
        b= b / 10;  
        d = d + (rem) * ( pow (2, i));  
          
    }  
    printf ("%d", d);  
    return 0;  
}  
