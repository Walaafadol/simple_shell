#include "main.h"
/**
*exit_shell - program
*Return:0
*@command:parameter
*@argv:argument
*@status:argument
*@idx:argument
*/
void exit_shell(char **command, char **argv, int *status, int idx)
{
char *index, msg[] = ": exit illegal number: ";
int exitva = (*status);
if (command[1])
{
if (ispositive(command[1]))
{
exitva = _atoi(command[1]);
}
else
{
index = _itoa(idx);
write(STDERR_FILENO, argv[0], _strlen(argv[0]));
write(STDERR_FILENO, ":", 2);
write(STDERR_FILENO, index, _strlen(index));
write(STDERR_FILENO, msg, _strlen(msg));
write(STDERR_FILENO, command[1], _strlen(command[1]));
write(STDERR_FILENO, "\n", 1);
free(index);
freearray(command);
(*status) = 2;
return;
}


}
freearray(command);
exit(exitva);
}
/**
*printenv - program
*Return:0
*@command:parameter
*@status:argument
*/
void printenv(char **command, int *status)
{
int i;
for (i = 0; environ[i]; i++)
{
write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
write(STDOUT_FILENO, "\n", 1);
}
freearray(command);
(*status) = 0;
}
