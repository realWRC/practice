#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - function that returns the length of a string
 * @s: string feed to the function
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
/**
 * char *_strcpy - a function that copies the string pointed
 * to by src
 * @dest: string to copy to
 * @src: string to copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x, y;

	x = 0;
	y = 0;
	while (*(src + x) != '\0')
	{
		x++;
	}
	for ( ; y <= x ; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * _putchar - function that prints a single character
 * @c: Character to be printed
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
/**
 * print_int - function that prints an integer with write function
 * @integer: Integer to be printed
 */
int print_int(int integer)
{
	int size = snprintf(NULL, 0, "%d", integer);
	char *container;

	container = (char *)malloc((size + 1) * sizeof(char));
	if (container == NULL)
	{
		free(container);
		exit(EXIT_FAILURE);
	}
	snprintf(container, size + 1, "%d", integer);
	write(1, container, size);
	free(container);
	return (size);
}
/**
 * print_double - Prints double with write function
 * @number: floating number point to be printed
 */
int print_double(double number)
{
	int size = snprintf(NULL, 0, "%f", number);
	char *container;

	container = (char *)malloc(size + 1);
	if (container == NULL)
	{
		free(container);
		exit(EXIT_FAILURE);
	}
	snprintf(container, size + 1, "%f", number);
	write(1, container, size);
	free(container);
	return (size);
}
