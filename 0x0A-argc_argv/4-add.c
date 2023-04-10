#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check if string array is num
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/

int main(int argc, char **argv)
{
int i, n, sum = 0;
char *flag;


if (argc < 2)
{
printf("0\n");
return (0);
}


for (i = 1; argv[i]; i++)
{
n = strtol(argv[i], &flag, 10);
if (*flag)
{
printf("Error\n");
return (1);
}
else
{
sum += n;
}
}
printf("%d\n", sum);


return (0);
}
