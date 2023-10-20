#include "main.h"
/**
 * _getsenv - the main program of simple shell
 * Description: to run a simple shell program
 * @var: argument count
 * Return: void
 */
char *_getsenv(char *var)
{
char *tmp, *key, *valu, *env;
int i;
for (i = 0; environ[i]; i++)
{
tmp = _strdup(environ[i]);
key = strtok(tmp, "=");
if (_strcmp(key, var) == 0)
{
valu = strtok(NULL, "\n");
env = _strdup(valu);
free(tmp);
return (env);
}
free(tmp), tmp = NULL;
}
return (NULL);
}
