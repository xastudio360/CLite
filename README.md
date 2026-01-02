# CLite

**CLite** is a library designed to simplify C programming by adding high-level functions that make code more readable and concise.

## 🎯 Project Goal

To provide C programmers with convenient tools for input/output operations, string manipulation, data structures, and other frequently used operations, while maintaining the performance and simplicity of the C language.

## 📋 Features

### Input/Output Module (clite_io)

- **print()** — output without formatting and newline
- **printl()** — output with newline
- **printfl()** — formatted output with automatic newline
- **scan_int()** — safe integer input
- **scan_float()** — floating-point number input
- **scan_char()** — single character input
- **scan_line()** — string input
- **scanfp()** — formatted input with a prompt

## 🚀 Quick Start

### Installation

```bash
# Clone the repository
git clone https://github.com/xastudio360/CLite.git
cd CLite

# Build the library
make

# (Optional) Install system-wide
sudo make install
```

### Usage Example

```c
#include "clite_io.h"

int main(void) {
    printl("Welcome to CLite!");
    
    // Simple input with a prompt
    int age;
    scanfp("Enter your age: ", "%d", &age);
    
    // Formatted output
    printfl("You are %d years old!", age);
    
    // String input
    char name[50];
    printl("What is your name?");
    scan_line(name, sizeof(name));
    
    printfl("Nice to meet you, %s!", name);
    
    return 0;
}
```

### Compiling Your Project

```bash
# With the library installed
gcc main.c -lclite -o myapp

# Without installation (local build)
gcc main.c -I./CLite -L./CLite -lclite -o myapp
```

## 📚 Documentation

### print()
Outputs a string without a newline.

```c
print("Hello, ");
print("world!\n");
// Output: Hello, world!
```

### printl()
Outputs a string with an automatic newline.

```c
printl("First line");
printl("Second line");
// Output:
// First line
// Second line
```

### printfl()
Formatted output with a newline (equivalent to printf + \n).

```c
int x = 10;
float y = 3.14;
printfl("x = %d, y = %.2f", x, y);
// Output: x = 10, y = 3.14
```

### scan_int()
Safely reads an integer with automatic buffer clearing.

```c
printl("Enter a number:");
int num = scan_int();
printfl("You entered: %d", num);
```

### scan_float()
Reads a floating-point number.

```c
printl("Enter a floating-point number:");
float value = scan_float();
printfl("Value: %.2f", value);
```

### scan_char()
Reads a single character.

```c
printl("Enter a character:");
char ch = scan_char();
printfl("Character: %c", ch);
```

### scan_line()
Reads an entire line (until newline).

```c
char buffer[100];
printl("Enter text:");
scan_line(buffer, sizeof(buffer));
printfl("You wrote: %s", buffer);
```

### scanfp()
Formatted input with a displayed prompt.

```c
int x, y;
scanfp("Enter coordinates (x y): ", "%d %d", &x, &y);
printfl("Coordinates: (%d, %d)", x, y);
```

## 🛠️ Requirements

- C compiler (GCC, Clang or compatible)
- C99 standard or higher
- Make (for using the Makefile)

## 🔧 Build

```bash
# Build the library
make

# Build the example
make example

# Run the example
./example

# Clean the project
make clean
```

## 🌟 Development Roadmap

- [ ] String operations module (clite_string)
- [ ] Dynamic arrays (clite_vector)
- [ ] Hash tables (clite_map)
- [ ] Enhanced file operations
- [ ] Memory management (arenas, pools)
- [ ] Utilities (math, time, logging)

## 📄 License

Apache License.

## 🤝 Contributing

Pull requests and issues with suggestions for improvements are welcome!

## 📧 Contacts

Questions and suggestions: xa.studio.360@gmail.com

---

CLite — making C programming easier and more enjoyable! ✨
