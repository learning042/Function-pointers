#include <stdio.h>
#include <stdlib.h>

int	compare(const void *a, const void *b)
{
	return (*(int *)a - *(int *)b);
}

int	main(void)
{
	int	arr[] = {5,8,40,35,1};
	int	size = sizeof(arr) / sizeof(arr[0]);

	// Quick sort
	qsort(arr, size, sizeof(int), compare);

	for (int i = 0; i < size; ++i)
		printf("%d ", arr[i]);
	return (0);
}
