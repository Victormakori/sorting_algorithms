#include "sort.h"

/**
* bubble_sort - A function that sorts an array(ints) in ascending order
* Uses Bubble-sort algorithm
*
* @array: pointer to the array to be sorted
* @size: Size of the array/ elements in the array
*/
void bubble_sort(int *array, size_t size)
{
size_t i, j, tmp;
int track_swap = 0; /* initilized to false */

if (array == NULL || size < 2)
{
return;
}
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i - 1; j++)
{
/* Compare the elements */
if (array[j] > array[j + 1])
{
/* complete the swap */
tmp = array[j];
array[j] = array[j + 1];
array[j + 1] = tmp;
track_swap = 1; /* Set flag to true */
print_array(array, size); /* Print the new swapped array */
}
}
if (track_swap == 0) /* Handle no swap case */
{
break;
}
}
}
