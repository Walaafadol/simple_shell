#include "main.h"
/**
 * freearray - the main program of simple shell
 * Description: to run a simple shell program
 * @arr: argument count
 * Return: void
 */
void freearray(char **arr)
{
int i;
if (!arr)
return;
for (i = 0; arr[i]; i++)
{
free(arr[i]);
arr[i] = NULL;
}
free(arr), arr = NULL;
}
/**
 * printerror - the main program of simple shell
 * Description: to run a simple shell program
 * @name: argument count
 * @cmd: argument count
 * @dx: argument count
 * Return: void
 */
void printerror(char *name, char *cmd, int dx)
{
char *indexx, msg[] =  ": not fount\n";
indexx = _itoa(dx);
write(STDERR_FILENO, name, _strlen(name));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, indexx, _strlen(indexx));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, cmd, _strlen(cmd));
write(STDERR_FILENO, msg, _strlen(msg));
free(indexx);
}
