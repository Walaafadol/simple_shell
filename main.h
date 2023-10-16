#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>


char *_strncat(char *dest, const char *src);
int _putchar(char c);
int _printstring(char *str);
char *_strdup(const char *str);
char *location(char *path, char *args);
char *gets_loc(char *arg);

int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *getEnv(const char *variable);
#endif
