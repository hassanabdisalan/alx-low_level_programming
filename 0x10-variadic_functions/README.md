README for Variadic Functions
0. Beauty is variable, ugliness is constant
Description:

This function returns the sum of all its parameters.

Prototype:

c
Copy code
int sum_them_all(const unsigned int n, ...);
Requirements:

If n == 0, return 0.
Compilation:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
Usage:

bash
Copy code
./a
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x10-variadic_functions
File: 0-sum_them_all.c
1. To be is to be the value of a variable
Description:

This function prints numbers, followed by a new line.

Prototype:

c
Copy code
void print_numbers(const char *separator, const unsigned int n, ...);
Requirements:

separator is the string to be printed between numbers.
n is the number of integers passed to the function.
If separator is NULL, don’t print it.
Print a new line at the end of the function.
Compilation:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
Usage:

bash
Copy code
./b
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x10-variadic_functions
File: 1-print_numbers.c
2. One woman's constant is another woman's variable
Description:

This function prints strings, followed by a new line.

Prototype:

c
Copy code
void print_strings(const char *separator, const unsigned int n, ...);
Requirements:

separator is the string to be printed between the strings.
n is the number of strings passed to the function.
If separator is NULL, don’t print it.
If one of the strings is NULL, print (nil) instead.
Print a new line at the end of the function.
Compilation:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
Usage:

bash
Copy code
./c
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x10-variadic_functions
File: 2-print_strings.c
3. To be is a to be the value of a variable
Description:

This function prints anything.

Prototype:

c
Copy code
void print_all(const char * const format, ...);
Requirements:

format is a list of types of arguments passed to the function.
c: char
i: integer
f: float
s: char * (if the string is NULL, print (nil) instead)
Any other char should be ignored.
You are not allowed to use for, goto, ternary operator, else, do ... while.
You can use a maximum of 2 while loops, 2 if statements.
You can declare a maximum of 9 variables.
You are allowed to use printf.
Print a new line at the end of the function.
Compilation:

bash
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
Usage:

bash
Copy code
./d
Repo:

GitHub repository: alx-low_level_programming
Directory: 0x10-variadic_functions
File: 3-print_all.c
