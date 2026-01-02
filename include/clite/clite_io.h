/**
 * @file clite_io.h
 * @brief CLite Input/Output - simplified input/output for C
 * @version 1.0
 */

#ifndef CLITE_IO_H
#define CLITE_IO_H

#include <stdio.h>
#include <stdarg.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief Prints a string without formatting and without a newline
 * @param str String to print (only \n is supported)
 */
void print(const char* str);

/**
 * @brief Prints a string with a newline at the end
 * @param str String to print
 */
void printl(const char* str);

/**
 * @brief Prints a formatted string with a newline
 * @param format Format string (like printf)
 * @param ... Arguments for formatting
 */
void printfl(const char* format, ...);

/**
 * @brief Reads an integer
 * @return The entered integer
 */
int scan_int(void);

/**
 * @brief Reads a string (until a newline character)
 * @param buffer Buffer to store the string
 * @param size Buffer size
 * @return Pointer to buffer or NULL on error
 */
char* scan_line(char* buffer, int size);

/**
 * @brief Reads a single character
 * @return The read character
 */
char scan_char(void);

/**
 * @brief Reads a floating-point number
 * @return The entered float number
 */
float scan_float(void);

/**
 * @brief Formatted input with a prompt displayed first
 * @param prompt Prompt text to display
 * @param format Format string (like scanf)
 * @param ... Pointers to variables for reading
 * @return Number of successfully read items
 */
int scanfp(const char* prompt, const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif /* CLITE_IO_H */
