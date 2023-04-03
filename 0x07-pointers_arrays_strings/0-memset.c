#include "main.h"
/**
 *_memset() function fills a memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the constant byte
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n) 
{
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}
