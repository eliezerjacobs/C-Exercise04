#include "Ex04.02.h"
#include "stdio.h"
#include "string.h"

#define STRING_SIZE 1000

int main(void)
{
    char orderedString[STRING_SIZE];
    printf_s("Type in a string: ");
    scanf_s("%[^\n]s", orderedString, 100);
    PrintReverse(orderedString);
}

void PrintReverse(char *string)
{
    char *sentence[100];
    char *next;
    size_t i = 0;
    char *token = strtok_s(string, " ", &next);
    while (token)
    {
        sentence[i] = token;
        token = strtok_s(NULL, " ", &next);
        ++i;
    }
    for (int j = i - 1; j > -1; --j)
    {
        printf_s("%s ", sentence[j]);
    }

}