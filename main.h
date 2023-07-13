#ifndef MAIN_H
#define MAIN_H

#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

extern char **environ;  /*Declare the external environment variable array*/
void execmd(char **argv);
char *get_location(char *command);
void execute(int num_tokens, char **argv, char *copy_command);
int token_count(char *copy_command, char *full_command);
char *directory_path(int command_length, char *path_token, char *command);
char* _strdup(char* str);
char *_strcat(char *destination, char *source);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
