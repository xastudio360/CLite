/**
 * @file example_clite_io.c
 * @brief Example of CLite IO usage
 */

#include "clite_io.h"

int main(void) {
    // Examples of using print and printl
    print("Hello, ");
    print("this is CLite!\n");
    printl("This line includes a newline");
    
    // Formatted output
    printfl("Number: %d, string: %s", 42, "test");
    
    printl("\n--- Input examples ---");
    
    // Integer input
    printl("Enter an integer:");
    int num = scan_int();
    printfl("You entered: %d", num);
    
    // String input
    char line[100];
    printl("\nEnter a string:");
    scan_line(line, sizeof(line));
    printfl("You entered: %s", line);
    
    // Character input
    printl("\nEnter a character:");
    char ch = scan_char();
    printfl("You entered: %c", ch);
    
    // Float input
    printl("\nEnter a floating-point number:");
    float f = scan_float();
    printfl("You entered: %.2f", f);
    
    // Formatted input with prompt
    int age;
    scanfp("Enter your age: ", "%d", &age);
    printfl("Your age: %d", age);
    
    // Multiple input
    int x, y;
    scanfp("Enter two coordinates (x y): ", "%d %d", &x, &y);
    printfl("Coordinates: x=%d, y=%d", x, y);
    
    return 0;
}
