#include "main.h"
/**
* _atoi - This function converts a string to an integer.
* @s: input string.
* Return: integer.
*/
int _atoi(char *s)
{
int i, num = 0;
for (i = 0; s[i]; i++)
{
num *= 10;
num += (s[i] - '0');
}
return (num);
}
