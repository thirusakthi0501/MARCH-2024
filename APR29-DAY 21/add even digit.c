///add even digit in a number

#include<stdio.h>
int main(){
int q,z,x=0;
scanf("%d ",&q);
while(q>0){
z=q%10;
if(z%2==0)
  x+=z;
q/=10;
}
  printf("%d",x);
}
