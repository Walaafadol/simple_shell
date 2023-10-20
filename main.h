#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <stddef.h>
#include <fcntl.h>
#include <dirent.h>


#define DELIM " \t\n"
extern char **environ;
char *read_line(void);

char *_strncat(char *dest, const char *src);
int _putchar(char c);
int _printstring(char *str);
char *_strdup(const char *str);
char *location(char *path, char *args);
char *gets_loc(char *arg);
int _execute(char **command, char **arg, int idx);
char *_getspath(char *command);
int _atoi(char *s);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *getEnv(const char *variable);
char *_strcat(char *s1, char *s2);
char *_strcpy(char *s1, char *s2);
void freearray(char **arr);
char **tokenizr(char *line);
char *_getsenv(char *var);
void printerror(char *name, char *cmd, int dx);
char *_itoa(int s);
void reverse_st(char *str, int len);


#endif
