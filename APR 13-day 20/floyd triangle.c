/*
1 
2 3 
4 5 6 
7 8 9 10
*/
#include <stdio.h>

int main()
{
    int q,w=0;
    scanf("%d ",&q);
    for(int e=0;e<q;e++){
        for(int t=e;t<=e;t++){
            printf("%d ",w++);
        }
        printf("\n");
    }
}

/*
  
      1 
     1 1 
    1 2 1 
   1 3 3 1 
  1 4 6 4 1 

  */


#include<stdio.h>
int main(){
    int q,w= 1;
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        for (int m=1;m<=q-i;m++)
            printf("  ");
        for (int j=0;j<=i;j++) {
            if (j==0 || i==0)
                w=1;
            else
                w= w*(i-j+1)/j;
            printf("%4d",w);
        }
        printf("\n");
    }
}
