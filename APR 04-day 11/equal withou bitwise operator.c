
/* Write a C Program to check if two numbers are equal without using the bitwise operator. */

#include <stdio.h>

int main() {
    int q,w;
    scanf("%d %d",&q,&w);
    if((q^w)==0){
        printf("Same");
    }
    else{
        printf("Not Same");
    }
}
