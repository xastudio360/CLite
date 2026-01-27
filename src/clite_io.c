/**
 * @file clite_io.c
 * @brief CLite I/O functions implementation
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

double scan_double(void) {
    double value;
    while (scanf("%lf", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

signed char scan_byte(void) {
    int temp;
    while (scanf("%d", &temp) != 1 || temp < -128 || temp > 127) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return (signed char)temp;
}

unsigned char scan_ubyte(void) {
    unsigned int temp;
    while (scanf("%u", &temp) != 1 || temp > 255) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return (unsigned char)temp;
}

short scan_short(void) {
    short value;
    while (scanf("%hd", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

unsigned short scan_ushort(void) {
    unsigned short value;
    while (scanf("%hu", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

unsigned int scan_uint(void) {
    unsigned int value;
    while (scanf("%u", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

long scan_long(void) {
    long value;
    while (scanf("%ld", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

unsigned long scan_ulong(void) {
    unsigned long value;
    while (scanf("%lu", &value) != 1) {
        // Clear buffer on input error
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    // Clear remaining buffer
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    
    return value;
}

char* scan_line_safe(char* buffer, int size) {
    return scan_line(buffer, size);
}

void print_error(const char* str) {
    if (str == NULL) return;
    fprintf(stderr, "%s", str);
    fflush(stderr);
}

void printfl_error(const char* format, ...) {
    if (format == NULL) return;
    
    va_list args;
    va_start(args, format);
    vfprintf(stderr, format, args);
    va_end(args);
    
    fprintf(stderr, "\n");
    fflush(stderr);
}

int scanfp(const char* prompt, const char* format, ...) {
    if (prompt == NULL || format == NULL) return 0;
    
    // Print prompt
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
