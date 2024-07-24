#include "3-calc.h"

/**
* main - Performs simple operations
* @argc: Argument count
* @argv: Argument vector
* Return: 0 on success, otherwise exits with status 98, 99, or 100
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
op_func = get_op_func(argv[2]);

if (op_func == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}

result = op_func(num1, num2);
printf("%d\n", result);

return (0);
}

