#include<stdio.h>  
int main()    
{    
int n,r,l=0,t;    
scanf("%d",&n);    
t=n;    
while(n>0)    
{    
r=n%10;    
l=(l*10)+r;    
n=n/10;    
}    
if(t==l)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   
