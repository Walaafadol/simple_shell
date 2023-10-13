#include "main.h"
/**
*_printstring - program
*Return:0
*@str:parameter
*/
int _printstring(char *str)
{
int i = 0, count = 0;
while (str[i])
{
count +=  _putchar(str[i++]);
}
return (count);
}

