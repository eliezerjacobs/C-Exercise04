#ifndef EX04_03
#define EX04_03

/// @file Ex04.03.h

/**
 * @brief Prints out all the arguments to the current program, line by line
 * @param argv 
*/
void PrintArgs(char *argv[]);

/**
 * @brief Counts the number of switches passed to the current program
 * @param argv
*/
int CountSwitches(char *argv[]);

/**
 * @brief Determines the letter case of a string
 * @param arg The string to evaluate
 * @return The letter casing of the string (-1 = neither. 0 = no alphabetic characters. 1 = all alphabetic characters are UPPER_CASE. 2 = all alphabetic characters are lower_case)
*/
int CheckCase(char *arg);

/**
 * @brief Counts the number of arguements that are a certain casing. (See CheckCase() documentation)
 * @param argv 
 * @param letterCase
*/
int CountCase(char *argv[], int letterCase);

#endif