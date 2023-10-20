#include "main.h"
/**
 * _execute - the main program of simple shell
 * Description: to run a simple shell program
 * @command: argument count
 * @arg: argument value
 * @idx: argument value
 * Return: void
 */
int _execute(char **command, char **arg, int idx)
{
pid_t child;
int status;
char *fullcmd;
fullcmd = _getspath(command[0]);
if (!fullcmd)
{
printerror(arg[0], command[0], idx);
freearray(command);
return (127);
}
child = fork();
if (child == 0)
{
if (execve(fullcmd, command, environ) == -1)
{
freearray(command);
free(fullcmd), fullcmd = NULL;
}
}
else
{
waitpid(child, &status, 0);
freearray(command);
free(fullcmd), fullcmd = NULL;
}
return (WEXITSTATUS(status));
}
