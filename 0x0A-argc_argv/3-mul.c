#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int a, b, c, product;
	char error[10] = "Error";

	if (argc != 3)

	{
		printf("%s\n", error);
		
		return (1);
	}

	for (a = 0; a < argc; a++)

	{
		b = atoi(*(argv + 1)); /**b is first number*/
		c = atoi(argv[2]); /** c is second number*/
	}
	product = b *c;
	printf("%d\n", product);
	
	return (0);
}
