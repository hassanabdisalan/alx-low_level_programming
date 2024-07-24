#include <stddef.h>
/**
*array_iterator - executes a function on each element of an array
*@array: pointer to the array
*@size: size of the array
*@action: pointer to the function to execute on each element of the array
*
*Description: This function iterates through each element of the array
*and applies the function pointed to by 'action' to each element.
*'action' is a function that takes an integer argument and returns void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || action == NULL)
{
return;
}
for (i = 0; i < size; ++i)
{
action(array[i]);
}
}
