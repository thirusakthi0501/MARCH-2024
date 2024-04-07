#include <stdio.h>
#include <stdlib.h>
	

int main()
{
	int arr[] = [1,2,3,4,3,2,1];
	int arr_size = sizeof(arr) / sizeof(arr[0]);
  int i, j;
	printf(" Repeating elements are ");
	for (i = 0; i < size - 1; i++)
		for (j = i + 1; j < size; j++)
			if (arr[i] == arr[j])
				printf("%d ", arr[i]);
	return 0;
}
