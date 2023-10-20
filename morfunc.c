#include "main.h"
/**
 * _itoa - the main program of simple shell
 * Description: to run a simple shell program
 * @s: argument count
 * Return: void
 */
char *_itoa(int s)
{
char bufer[20];
int i = 0;
if (s == 0)
bufer[i++] = '0';
else
{
while (s > 0)
{
bufer[i++] = (s % 10) + '0';
s /= 10;
}
}
bufer[i] = '\0';
reverse_st(bufer, i);
return (_strdup(bufer));
}
/**
 * reverse_st - the main program of simple shell
 * Description: to run a simple shell program
 * @str: argument count
 * @len: argument count
 * Return: void
 */

void reverse_st(char *str, int len)
{
char temp;
int start = 0;
int end = len - 1;
while (start < end)
{
temp = str[start];
str[start] = str[end];
str[end] = temp;
start++;
end--;
}
}
/**
 * ispositive - the main program of simple shell
 * Description: to run a simple shell program
 * @str: argument count
 * Return: void
 */
int ispositive(char *str)
{
int i;
if (!str)
return (0);
for (i = 0; str[i]; i++)
{
if (str[i] < '0' || str[i] > '9')
return (0);
}
return (1);
}
