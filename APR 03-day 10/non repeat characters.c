/*write a program to print the non repeated characters in the string.
    input:
       character
    output:
        h t e
*/

#include<stdio.h>
#include<string.h>
int main()
{
    //Initializing variables.
    char s[100];
    scanf("%s",s);
    int i;
    int f[256] = {0};
    for(i = 0; i<strlen(s); i++)
    {
        f[s[i]]++;
    }
  for(i = 0; i < 256; i++)
  {
    if(f[i] == 1)
     {
      printf(" %c ", i);
     }
  }
  return 0;
 }
