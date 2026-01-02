/**
 * @file clite_io.c
 * @brief Implementation of CLite input/output functions
 */

#include "clite_io.h"
#include <string.h>

void print(const char* str) {
    if (str == NULL) return;
    printf("%s", str);
    fflush(stdout);
}

void printl(const char* str) {
    if (str == NULL) return;
    printf("%s\n", str);
    fflush(stdout);
}

void printfl(const char* format, ...) {
    if (format == NULL) return;
    
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
    
    printf("\n");
    fflush(stdout);
}

int scan_int(void) {
    int value;
    while (scanf("%d", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

char* scan_line(char* buffer, int size) {
    if (buffer == NULL || size <= 0) return NULL;
    
    if (fgets(buffer, size, stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(buffer);
        if (len > 0 && buffer[len - 1] == '\n') {
            buffer[len - 1] = '\0';
        }
        return buffer;
    }
    
    return NULL;
}

char scan_char(void) {
    char c = getchar();
    // Clear buffer
    int temp;
    while ((temp = getchar()) != '\n' && temp != EOF);
    
    return c;
}

float scan_float(void) {
    float value;
    while (scanf("%f", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

int scanfp(const char* prompt, const char* format, ...) {
    if (prompt == NULL || format == NULL) return 0;
    
    // Display prompt
    printf("%s", prompt);
    fflush(stdout);
    
    // Read data
    va_list args;
    va_start(args, format);
    int result = vscanf(format, args);
    va_end(args);
    
    // Clear buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return result;
}
