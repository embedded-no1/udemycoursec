#include <stdio.h>

int main(int argc, char *argv[])
{
	int numofarguments=argc;
	char *argument1= argv[0];
	char *argument2 = argv[1];
	printf("Number of arguments: %d\n",numofarguments);
	printf("Argument 1: %s\n",argument1);
	printf("Argument 2: %s\n",argument2);
	return 0;
}
