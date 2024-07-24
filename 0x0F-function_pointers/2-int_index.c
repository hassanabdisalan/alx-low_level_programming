#include <stddef.h>
/**
*int_index - searches for an integer in an array
*@array: pointer to the array of integers
*@size: number of elements in the array
*@cmp: pointer to the function used to compare values
*
*Description: This function searches through the array 'array' for the first
*element for which the function pointed to by 'cmp' does not return 0.
*'cmp' is a function that takes an integer argument and returns an integer.
*If no element matches the criteria, the function returns -1.
*If size is less than or equal to 0, the function also returns -1.
*
*Return: Index of the first matching element, or -1 if no element matches
*or size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
{
return (-1);  /* Return -1 if array is NULL, cmp is NULL, or size <= 0*/
}

for (i = 0; i < size; ++i)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}

return (-1);
}
