/**
 * @file example.c
 * @brief Usage example of CLite IO v1.0-beta
 */

#include "clite_io.h"
int main(void) {
    printl("=== CLite I/O v1.0-beta - Usage Examples ===\n");
    
    // Examples of using print and printl
    print("Hello, ");
    print("this is CLite!\n");
    printl("This line has a newline");
    
    // Formatted output
    printfl("Number: %d, string: %s", 42, "test");
    
    printl("\n--- Basic Data Types ---");
    
    // Integer input
    printl("Enter an int:");
    int num = scan_int();
    printfl("You entered: %d", num);
    
    // Unsigned int input
    printl("\nEnter an unsigned int:");
    unsigned int unum = scan_uint();
    printfl("You entered: %u", unum);
    
    // Short input
    printl("\nEnter a short:");
    short s = scan_short();
    printfl("You entered: %hd", s);
    
    // Unsigned short input
    printl("\nEnter an unsigned short:");
    unsigned short us = scan_ushort();
    printfl("You entered: %hu", us);
    
    // Long input
    printl("\nEnter a long:");
    long l = scan_long();
    printfl("You entered: %ld", l);
    
    // Unsigned long input
    printl("\nEnter an unsigned long:");
    unsigned long ul = scan_ulong();
    printfl("You entered: %lu", ul);
    
    printl("\n--- Byte Types ---");
    
    // Byte input (signed char)
    printl("Enter a signed byte (-128 to 127):");
    signed char b = scan_byte();
    printfl("You entered: %d", b);
    
    // Unsigned byte input
    printl("\nEnter an unsigned byte (0 to 255):");
    unsigned char ub = scan_ubyte();
    printfl("You entered: %u", ub);
    
    printl("\n--- Floating Point Numbers ---");
    
    // Float input
    printl("Enter a float:");
    float f = scan_float();
    printfl("You entered: %.2f", f);
    
    // Double input
    printl("\nEnter a double:");
    double d = scan_double();
    printfl("You entered: %.6lf", d);
    
    printl("\n--- Strings and Characters ---");
    
    // String input
    char line[100];
    printl("Enter a string:");
    scan_line(line, sizeof(line));
    printfl("You entered: %s", line);
    
    // Safe string input
    char safe_line[50];
    printl("\nEnter a string (safe input):");
    scan_line_safe(safe_line, sizeof(safe_line));
    printfl("You entered: %s", safe_line);
    
    // Character input
    printl("\nEnter a character:");
    char ch = scan_char();
    printfl("You entered: %c", ch);
    
    printl("\n--- Formatted Input with Prompt ---");
    
    // scanfp with one parameter
    int age;
    scanfp("Enter your age: ", "%d", &age);
    printfl("Your age: %d", age);
    
    // scanfp with multiple parameters
    int x, y;
    scanfp("Enter coordinates (x y): ", "%d %d", &x, &y);
    printfl("Coordinates: x=%d, y=%d", x, y);
    
    printl("\n--- Error Output ---");
    
    // Normal output
    printl("This is a normal message (stdout)");
    
    // Error output
    print_error("This is an error message (stderr)\n");
    printfl_error("Error #%d: %s", 404, "File not found");
    
    printl("\n=== Testing completed ===");
    
    return 0;
}
