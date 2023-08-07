#include "main.h"
/**
*char *_strcpy - a function that copies the string pointed to src
*@dest: copy to
*@src: copy from
*main - void
*Return: string
*/
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src)
	{
		*p++ = *src++;
	}

	*p = '\0';

	return (dest);
}


