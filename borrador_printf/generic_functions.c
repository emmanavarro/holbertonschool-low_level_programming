#include "holberton.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: char that concatenates.
 * @src: char to be concatenated.
 *
 * Return: pointer.
 */

char *_strcat(char *dest, char *src)
{
	int pos_dest, pos_src;

	for (pos_dest = 0; dest[pos_dest] != '\0'; pos_dest++)
	{
	}
	for (pos_src = 0; src[pos_src] != '\0'; pos_src++)
	{
		dest[pos_dest + pos_src] = src[pos_src];
	}
	return (dest);
}

/**
 * clear_buffer - clear the buffer.
 *
 * @buff: pointer to the buffer position.
 */

void clear_buffer(char *buff)
{
	int pos_b;

	for (pos_b = 0; pos_b < BUFFER_SIZE; pos_b++)
	{
		buff[pos_b] = 0;
	}
}
