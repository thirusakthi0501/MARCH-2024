#include <stdio.h>
#include <string.h>
int main() {
    char q[1000];
    scanf("%s",q);
    int r=strlen(q);
    printf("%d",r);
}

/*
without length function */

#include <stdio.h>
int main() {
    char q[1000];
    int r=0;
    scanf("%s",q);
    for(int e=0;q[e]!='\0';e++){
        r+=1;
    }
    printf("%d ",r);
}


