#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *@s: string
 *_strlen - returns lenth of string
 * Return: length
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
