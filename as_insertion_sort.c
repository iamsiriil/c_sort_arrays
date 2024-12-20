#include <stdio.h>

void	as_insertion_sort(int *arr, int size)
{
	for (int j = 1, i; j < size; j++) {
		int	key = arr[j];
		i = j - 1;
		while (i >= 0 && arr[i] > key) {
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = key;
	}
}

int	main(void)
{
	int	arr[] = {5, 2, 4, 6, 1, 3};
	int	size = sizeof(arr) / sizeof(arr[0]);

	as_insertion_sort(arr, size);

	for (int i = 0; i < size; i++) printf("%d ", arr[i]);
	printf("\n");

	return (0);
}
