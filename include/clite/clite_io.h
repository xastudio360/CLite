/**
 * @file clite_io.h
 * @brief CLite Input/Output - simplified input/output for C
 * @version 1.0-beta
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
 * @param format Format string (as in printf)
 * @param ... Arguments for formatting
 */
void printfl(const char* format, ...);

/**
 * @brief Reads an integer
 * @return Entered integer
 */
int scan_int(void);

/**
 * @brief Reads a string (until newline character)
 * @param buffer Buffer to save the string
 * @param size Buffer size
 * @return Pointer to buffer or NULL on error
 */
char* scan_line(char* buffer, int size);

/**
 * @brief Reads a single character
 * @return Read character
 */
char scan_char(void);

/**
 * @brief Reads a floating-point number (float)
 * @return Entered float number
 */
float scan_float(void);

/**
 * @brief Reads a double-precision floating-point number (double)
 * @return Entered double number
 */
double scan_double(void);

/**
 * @brief Reads a byte (signed char)
 * @return Entered signed char number
 */
signed char scan_byte(void);

/**
 * @brief Reads an unsigned byte (unsigned char)
 * @return Entered unsigned char number
 */
unsigned char scan_ubyte(void);

/**
 * @brief Reads a short integer (short)
 * @return Entered short number
 */
short scan_short(void);

/**
 * @brief Reads an unsigned short integer (unsigned short)
 * @return Entered unsigned short number
 */
unsigned short scan_ushort(void);

/**
 * @brief Reads an unsigned integer (unsigned int)
 * @return Entered unsigned int number
 */
unsigned int scan_uint(void);

/**
 * @brief Reads a long integer (long)
 * @return Entered long number
 */
long scan_long(void);

/**
 * @brief Reads an unsigned long integer (unsigned long)
 * @return Entered unsigned long number
 */
unsigned long scan_ulong(void);

/**
 * @brief Safely reads a string with size check
 * @param buffer Buffer to save the string
 * @param size Buffer size
 * @return Pointer to buffer or NULL on error
 * @note More explicit name for safety
 */
char* scan_line_safe(char* buffer, int size);

/**
 * @brief Prints an error message to stderr
 * @param str String to print
 */
void print_error(const char* str);

/**
 * @brief Prints a formatted error message to stderr with a newline
 * @param format Format string (as in printf)
 * @param ... Arguments for formatting
 */
void printfl_error(const char* format, ...);

/**
 * @brief Formatted input with a preceding prompt output
 * @param prompt Prompt text to output
 * @param format Format string (as in scanf)
 * @param ... Pointers to variables for reading
 * @return Number of successfully read elements
 */
int scanfp(const char* prompt, const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif /* CLITE_IO_H */
