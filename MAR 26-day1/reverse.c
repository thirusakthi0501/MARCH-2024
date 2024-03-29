#include <stdio.h>

int main(){
int q,w,m=0;
scanf("%d",&q);
while(q>0){
w=q%10;
m=(m*10)+w;
q/=10;
}
printf("%d",m);
}
