#include "main.h"
/**
 * main - the main program of simple shell
 * Description: to run a simple shell program
 * @argc: argument count
 * @env: argument value
 * Return: void
 */
int main(int argc, char **env)
{
(void)argc;
char *prompt = "(Shell)$";
char *buffer = NULL;
char *argv[20], *delim = "\n";
size_t bufersize = 0;
ssize_t numb_ch;
pid_t child_id;
int i, j, stutus;
while (1)
{
if (isatty(0))
_printstring(prompt);
numb_ch = getline(&buffer, &bufersize, stdin);
if (numb_ch == -1)
{
free(buffer);
exit(0); }
i = 0;
while (buffer[i])
{
if (buffer[i] == '\n')
buffer[i] = 0;
i++; }
j = 0;
argv[j] = strtok(buffer, delim);
while (argv[j])
{
argv[++j] = strtok(NULL, delim); }
child_id = fork();
if (child_id < 0)
{
_printstring("fork failed");
free(buffer);
exit(0); }
else if (child_id == 0)
{
if (execve(argv[0], argv, env) == -1)
_printstring("command doesn't exit ..\n"); }
else
wait(&stutus); }
free(buffer);
return (0); }
