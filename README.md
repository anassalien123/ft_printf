# ft_printf

A custom implementation of the C standard library function `printf`, created as part of the 42 school curriculum. This project recreates the essential functionality of `printf` to better understand variadic functions, output formatting, and low-level programming.

## 📋 Description

`ft_printf` is a reimplementation of the standard `printf` function that handles various format specifiers and produces formatted output. This project demonstrates deep understanding of:

- Variadic functions in C
- String parsing and formatting
- Type conversion and formatting
- Low-level I/O operations

## ✨ Features

The `ft_printf` function supports the following format specifiers: 

| Specifier | Description |
|-----------|-------------|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal format |
| `%d` | Prints a decimal (base 10) number |
| `%i` | Prints an integer in base 10 |
| `%u` | Prints an unsigned decimal (base 10) number |
| `%x` | Prints a number in hexadecimal (base 16) lowercase format |
| `%X` | Prints a number in hexadecimal (base 16) uppercase format |
| `%%` | Prints a percent sign |

## 🚀 Getting Started

### Prerequisites

- GCC or any C compiler
- Make

### Installation

1. Clone the repository:
```bash
git clone https://github.com/anassalien123/ft_printf.git
cd ft_printf
```

2. Compile the library:
```bash
make
```

This will generate the `libftprintf.a` static library. 

### Usage

1. Include the header in your C file:
```c
#include "ft_printf.h"
```

2. Compile your program with the library:
```bash
cc your_program.c -L. -lftprintf -o your_program
```

3. Example usage:
```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello, %s!\n", "World");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hex: %x\n", 255);
    ft_printf("Pointer: %p\n", &main);
    return (0);
}
```

## 📁 Project Structure

```
ft_printf/
├── ft_printf.c          # Main printf implementation
├── ft_printf.h          # Header file with function prototypes
├── ft_putadress.c       # Handle pointer address printing
├── ft_putchar. c         # Print single character
├── ft_puthexa_lower.c   # Print hexadecimal (lowercase)
├── ft_puthexa_upper.c   # Print hexadecimal (uppercase)
├── ft_putnbr.c          # Print signed integers
├── ft_putstr. c          # Print strings
├── ft_putunbr.c         # Print unsigned integers
├── ft_strlen.c          # Calculate string length
├── Makefile             # Build configuration
└── README.md            # Project documentation
```

## 🛠️ Makefile Rules

- `make` or `make all` - Compiles the library
- `make clean` - Removes object files
- `make fclean` - Removes object files and the library
- `make re` - Recompiles the entire project

## 🔧 Implementation Details

The implementation uses: 

- **Variadic arguments** (`va_list`, `va_start`, `va_arg`, `va_end`) to handle variable numbers of arguments
- **Custom output functions** for each data type
- **Format specifier parsing** to determine the appropriate conversion function
- **Error handling** for invalid format specifiers

The main function `ft_printf` parses the format string character by character, identifies format specifiers, and calls the appropriate conversion function for each argument.

## 📝 Function Prototype

```c
int ft_printf(const char *str, ...);
```

**Returns:** The number of characters printed, or -1 on error. 

## ⚙️ Compilation Flags

The project is compiled with the following flags for maximum code quality: 
- `-Wall` - Enable all warnings
- `-Wextra` - Enable extra warnings
- `-Werror` - Treat warnings as errors

## 👤 Author

**ancheab** (anassalien123)

## 📄 License

This project is part of the 42 school curriculum. 

## 🙏 Acknowledgments

- 42 School for the project subject
- The C standard library documentation for reference
