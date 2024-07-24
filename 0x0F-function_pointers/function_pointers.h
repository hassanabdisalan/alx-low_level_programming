#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));

/* Example functions to print names */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif /* FUNCTION_POINTERS_H */

