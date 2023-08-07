#include "main.h"
#include <stddef.h>
/**
*_strpbrk - Entry point
*@s: input 
*@accept: input
*Return: always 0 (success)
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		for (char *p = accept; *p; p++)
	{
	if (*s == *p)
	{
        return (s);
	}
	}
		s++;
	}
	return (NULL);
}

