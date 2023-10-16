#include "main.h"
/**
* getEnv - a function to get an environment
* @variable: the environment variable
* Return: The value of getenv or Null
*/
char *getEnv(const char *variable)
{
char **enviro, *owo, *aux, *tok;
int siz = _strlen((char *)variable);

for (enviro = enviro; *enviro; ++enviro)
{
aux = _strdup(*enviro);
tok = strtok(aux, "=");

if (tok == NULL || _strlen(tok) != siz)
{
free(aux);
continue;
}
if (_strcmp((char *)variable, aux) == 0)
{
tok = strtok(NULL, "=");
owo = _strdup(tok);
free(aux);
return (owo);
}
free(aux);
}
return (NULL);
}
