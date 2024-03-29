#include <stdio.h>
int main(){
int q,w,m;
scanf("%d %d", &q,&w);
m=q;
q=w;
w=m;
printf("%d %d",q,w);
}
