#include "main.h"
/**
 * main - the main program of simple shell
 *
 * Description: to run a simple shell program
 * @argc: argument count
 * @argv: argument value
 * Return: void
 */
int main(int argc, char **argv, char *env)
{
(void)argc;
char *prompt = "(Shell)$ ", *buffer = NULL;
size_t bufersize = 0;
ssize_t numb_ch;
pid_t child_id;
while (1)
{
_printstring(prompt);
numb_ch = getline(&buffer, &bufersize, stdin);
if (numb_ch == -1)
{
_printstring("shell stopped.....");
return (-1);
}
child_id = fork();
if (child_id < 0)
{
_printstring("fork failed");
return (-1);
}
else if (child_id == 0)
{
execve(buffer[0], argv, env);
}

_printstring(buffer);
}

free(buffer);
	return (0);
}
