
#include <stdio.h>

int main() {
  int array[],m,x;
  scanf("%d",&m);
  for(int e=0;e<m;e++){
    scanf("%d ",&array[e]);
  }
  scanf("%d ",&x);
  int n = sizeof(array) / sizeof(array[0]);
  for (int i = 0; i < n; i++)
    if (array[i] == x)
      return i;
  return -1;

  if(result == -1) 
    printf("Element not found");
  else
    printf("Element found at index: %d", result);
}
