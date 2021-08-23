#include "Ex04.05.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[], char *envp[])
{
    for (char **arg = argv + 1; *arg; ++arg)
    {
        SearchEnvVars(envp, *arg);
    }
}

void SearchEnvVars(char *envp[], char *filter)
{
    char *next;
    for (char **env = envp; *env; ++env)
    {
        if (!strncmp(*env, filter, strlen(filter))) // if equal
        {
            char *envVariable = strtok_s(*env, "=", &next);
            printf_s("Environment Variable \"%s\" has the value: \"%s\"\n", envVariable, next);
        }
    }
}