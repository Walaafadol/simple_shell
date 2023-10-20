#include "main.h"
/**
 * main - the main program of simple shell
 * @argc: argument count
 * @argv: argument value
 * Return: void
 */
int main(int argc, char **argv)
{
char *line = NULL, **command = NULL;
int stutus = 0;
int idx = 0;

(void)argc;
while (1)
{
line = read_line();
if (line == NULL)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (stutus);
}
idx++;
command = tokenizr(line);
if (!command)
continue;
if (isbuilt(command[0]))
handle_built(command, argv, &stutus, idx);
else
stutus = _execute(command, argv, idx);
}
}
