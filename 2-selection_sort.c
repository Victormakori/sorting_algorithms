#include "sort.h"

/**
* selection_sort - Uses selection sort to sort an array of ints
* Sorts them in ascending order
* @array: The one being sorted
* @size: Number of elements in the array being sorted
*
* Return: Void
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, temp, min_num_idx;

if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
min_num_idx = i;
for (j = i + 1; j < size; j++)
{
if (array[j] < array[min_num_idx])
{
min_num_idx = j;
}
}

if (min_num_idx != i)
{
temp = array[i];
array[i] = array[min_num_idx];
array[min_num_idx] = temp;
print_array(array, size);
}
}
}
