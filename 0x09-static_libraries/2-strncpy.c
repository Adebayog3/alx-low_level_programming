#include "main.h"
/**
*_strncpy - copy a string
*@dest: input value
*@src: input value
*@n: input value
*
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (n-- && *src)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}

