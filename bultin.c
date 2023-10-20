#include "main.h"
/**
* isbuilt - program
*Return:0
*@command:argument
*/
int isbuilt(char *command)
{
char *builtes[] = {"exit", "env", "setenv", "cd", NULL};
int i;
for (i = 0; builtes[i]; i++)
{
if (_strcmp(command, builtes[i]) == 0)
return (1);
}
return (0);
}

/**
*handle_built - program
*Return:0
*@command:parameter
*@argv:argument
*@status:argument
*@idx:argument
*/
void handle_built(char **command, char **argv, int *status, int idx)
{
(void) argv;
(void) idx;
if (_strcmp(command[0], "exit") == 0)
exit_shell(command, argv, status, idx);
else if (_strcmp(command[0], "env") == 0)
printenv(command, status);

}
