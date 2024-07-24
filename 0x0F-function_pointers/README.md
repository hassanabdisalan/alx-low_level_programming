Function Pointers Tasks
Task 0: What's my name
Write a function print_name that takes a string name and a function pointer void (*f)(char *). It uses the function pointer to print the name in different ways based on the function it points to.

Task 1: If you spend too much time thinking about a thing, you'll never get it done
Write a function array_iterator that takes an array of integers, its size, and a function pointer void (*action)(int). It executes the action function on each element of the array.

Task 2: To hell with circumstances; I create opportunities
Write a function int_index that searches for an integer in an array. It takes an array of integers, its size, and a function pointer int (*cmp)(int). It returns the index of the first element for which cmp returns non-zero.

Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program calc that performs simple arithmetic operations (+, -, *, /, %) based on user input. It uses function pointers to select and execute the appropriate operation.

Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
Write a program main that prints the opcodes (in hexadecimal) of its own main function. The program takes the number of bytes as an argument and prints the corresponding opcodes.


