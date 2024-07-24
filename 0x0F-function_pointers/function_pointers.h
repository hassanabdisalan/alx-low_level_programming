#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

/* Example functions to print names */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif /* FUNCTION_POINTERS_H */

