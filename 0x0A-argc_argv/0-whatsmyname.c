@@ -2,7 +2,7 @@
#include <stdio.h>

/**
* main - the program prints its name
* main - this program prints its name
*
* @argc: number of arguments
* @argv: string of argumements
@@ -11,6 +11,6 @@
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0];
	printf("%s\n", argv[0]);
	return (0);
}
