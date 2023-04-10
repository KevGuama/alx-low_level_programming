#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that multiplies two arguments passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
int x, y;


if (argc < 3)
{
printf("Error\n");
return (1);
}


x = atoi(argv[1]);
y = atoi(argv[2]);
printf("%d\n", x * y);


return (0);
}
