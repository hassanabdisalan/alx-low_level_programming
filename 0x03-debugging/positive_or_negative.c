#include <stdio.h>
#include "main.h"

void postive_or_negative(int i)
{
	if (i > 0)
		printf("%d is postive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		print("%d is negative\n", i);
}
