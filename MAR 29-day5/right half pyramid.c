#include <stdio.h>
int main()
{
    int a,i,j,s;
    scanf("%d",&a);
    for(i=1;i<=a;++i)
   {
      for(j=1;j<=a-i;++j)
       {
           printf(" ");
       }
       for(s=1;s<=i;s++)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}

/*

Input:
Enter value of n:5
Output:
    *
   **
  ***
 ****
*****

*/
