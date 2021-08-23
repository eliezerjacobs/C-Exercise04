#include "Ex04.03.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    printf_s("Total # of arguments: %i\n", argc);
    PrintArgs(argv);
    printf_s("Total # of switches: %i\n", CountSwitches(argv));
    printf_s("Total # of ALL_CAPS parameters: %i\n", CountCase(argv, 1));
    printf_s("Total # of all_lower_case parameters: %i\n", CountCase(argv, 2));
    printf_s("Rest of parameters: %i ", CountCase(argv, 0) + CountCase(argv, -1));
}

void PrintArgs(char *argv[])
{
    for (char **ptr = argv; *ptr; ++ptr)
    {
        printf_s("%s\n", *ptr);
    }
}

int CountSwitches(char *argv[])
{
    int result = 0;
    for (char **ptr = argv; *ptr; ++ptr)
    {
        if (*ptr[0] == '-' || *ptr[0] == '\\')
        {
            ++result;
        }
    }
    return result;
}

int CheckCase(char *arg)
{
    int result = 0; //none of the above
    for (char *ptr = arg; *ptr; ++ptr)
    {
        if (*ptr >= 65 && *ptr <= 90) // Upper case
        {
            if (result == -1 || result == 2) // previously classified as lower case
            {
                result = -1;
            }
            else
            {
                result = 1;
            }
        }
        else if (*ptr >= 97 && *ptr <= 122) // Lower Case
        {
            if (result == -1 || result == 1) // previously classified as upper case
            {
                result = -1;
            }
            else
            {
                result = 2;
            }
        }
    }
    return result;
}

int CountCase(char *argv[], int letterCase)
{
    int result = 0;
    for (char **ptr = argv; *ptr; ++ptr)
    {
        if (CheckCase(*ptr) == letterCase)
        {
            ++result;
        }
    }
    return result;
}