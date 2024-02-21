#include "sort.h"

/**
* lomuto_partition - Scheme used to partition an array
* @array: Partitioned array
* @left: left/low index of the partition
* @right: right/high index of the partition
* @size: array size
*
* Return: index(int) of the pivot
*/
int lomuto_partition(int *array, int left, int right, size_t size)
{
int *pivot, i, j, tmp;

pivot = array + right;

for (i = j = left; j < right; j++)
{
if (array[j] < *pivot)
{
if (i < j)
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
print_array(array, size);
}
i++;
}
}
if (array[i] > *pivot)
{
tmp = array[i];
array[i] = array[right];
array[right] = tmp;
print_array(array, size);
}
return (i);
}

/**
* lomuto_sort - sorts an array recursively
* @array: array sorted
* @left: low/left index of the partition
* @right: high/right index of the partition
* @size: array size
*/
void lomuto_sort(int *array, int left, int right, size_t size)
{
int pivot_idx;

if (right - left > 0)
{
pivot_idx = lomuto_partition(array, left, right, size);
lomuto_sort(array, left, pivot_idx - 1, size);
lomuto_sort(array, pivot_idx + 1, right, size);
}
}

/**
* quick_sort - used to to sort an array of integers
* Sorts in ascending order
* @array: array sorted
* @size: array size
*
* Return: void
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
{
return;
}
lomuto_sort(array, 0, size - 1, size);
}
