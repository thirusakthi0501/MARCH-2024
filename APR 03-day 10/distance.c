/*
Program to calculate distance between two points
     input:
         (x1,y1)=(3,4)    (x2,y2)=(7,7)
     output: 5
  */
#include <stdio.h>
#include <math.h>

int main() {
   int q,w,p,o,m,n;
   scanf("%d %d %d %d",&q,&w,&p,&o);
   m=p-q;
   n=o-w;
   printf("%d ",(int)sqrt(m*m+n*n));
  
}
