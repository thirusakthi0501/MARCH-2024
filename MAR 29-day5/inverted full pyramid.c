#include <stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    for(i=n;i>=1;--i)
   {
       for(j=1;j<=a-i;++j)
       {
           printf(" ");
       }
       for(j=1;j<=i;++j)
       {
           printf("* ");
       }
       printf("\n");
   }
   return 0;
}

/*

Input:
Enter value of n:5
Output:
* * * * *
 * * * *
  * * *
   * *
    *

*/
