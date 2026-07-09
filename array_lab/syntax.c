#include <stdio.h>
int main()
{
	int arr[4] = {10, 20, 30, 40};
	int size_of_array = sizeof(arr)/sizeof(arr[0]);
	printf("the size of array %d", size_of_array);
	putchar(10);
	for(int i = 0; i < size_of_array; i++)
	{
		printf("%d",arr[i]);
		putchar(10);
	}
	return 0;
}
