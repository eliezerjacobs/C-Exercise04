#include "Ex04.04.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[], char *envp[])
{
    PrintEnvironmentVars(envp);
}

void PrintEnvironmentVars(char *envp[])
{
    char *next;
    for (char **env = envp; *env; ++env)
    {
        char *envVariable = strtok_s(*env, "=", &next);
        printf_s("Environment Variable \"%s\" has the value: \"%s\"\n", envVariable, next);
    }
}