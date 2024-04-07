/*
2. Divide two integers without using division, multiplication and modulus operators
Example input:
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
*/

#include <stdio.h>

int main() {
   int q,w,m=0;
   scanf("%d %d",&q,&w);
   while(q>w){
       q-=w;
       m+=1;
   }
   printf("%d ",m);
}
