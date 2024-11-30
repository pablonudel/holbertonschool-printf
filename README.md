# Project Function _printf 🤖


## 1. Overview 📚

The _printf project aims to recreate a simplified version of the printf function in C. This function is designed to display formatted output on the screen using a format string along with additional arguments.

The primary goal of this project is to learn how to handle multiple arguments within a function, organize your code efficiently, and develop clean, maintainable coding practices.
## 2. The compile command ⬇️

to compile the program we must use this compiler:

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`
##  3. Requirements 📝

* Here’s a summarized version of the general requirements for your project:

* Allowed Editors: `vi`, `vim`, `emacs`.

* Compilation Environment: Ubuntu 20.04 LTS with gcc 

* File Format: All files must end with a new line.

* README.md: Include a README.md file at the root of the project.

* Code Style: Follow the Betty style (checked with betty-style.pl and betty-doc.pl).

* Global Variables: No global variables allowed.

  Function Limit: Maximum of 5 functions per file.

* Main.c Files: Do not push provided main.c files; they will be 
  ignored during compilation.

* Function Prototypes: Declare all function prototypes in a main.h header file.

* header Files: Include guards must be present in all header files.

* _putchar Function: If needed, you must implement the _putchar function yourself.

## 4. Examples of Usage 📋
Example program that uses _printf:
```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    len = _printf("This is a simple string.\n");
    _printf("The length of the string is: %d\n", len);

    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Holberton");
    _printf("Percentage: %%\n");
    _printf("Integer: %d, Negative: %i\n", 42, -42);

    return (0);
}

Expected Output:

This is a simple string.
The length of the string is: 23
Character: H
String: Holberton
Percentage: %
Integer: 42, Negative: -42

}
```


## 5. Testing 🔬
To test we use the main.c provided by holberton
here is the code:


```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
alex@ubuntu:~/c/printf$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
alex@ubuntu:~/c/printf$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
```


## 6. Man Page: A Comprehensive Guide 🟥

.\" Man page for _printf
.TH _printf 3 "November 29, 2024" "0.1" "Function Manual"
.SH NAME

_printf \- Custom formatted output conversion function

.SH SYNOPSIS
.PP
.I #include "main.h"

.I int _printf(const char *format, ...);
.SH DESCRIPTION
.PP
The _printf function is a custom implementation of the standard printf function 
that produces output to stdout, the standard output stream. It processes a format 
string and accepts a limited number of arguments, matching them with their respective 
format specifiers.
.PP
The function processes the format string, scanning for format specifiers that 
start with the '%' character. The corresponding output is generated for each 
specifier by calling the appropriate function from a pre-defined list of handlers.
.PP
.B Conversion specifiers
.PP
Characters that specifies the type of conversion to be applied.
.br
The supported specifiers are:

.RS
\- 
.B 'c' 
: Prints a character.

\- 
.B 's' 
: Prints a string.

\- 
.B '%' 
: Prints a literal percent sign.

\- 
.B 'i' 
: Prints an integer (integer).

\- 
.B 'd' 
: Prints a decimal (signed decimal integer).
.RE
.PP
The function uses variadic arguments, which are handled using the
va_list type and associated macros such as va_start and va_end.
.PP
This function does not handle all possible format specifiers available in the 
standard printf function and is limited to the set listed above.
.PP
It also does not reproduce the buffer handling of the C library printf function, or 
handles of flag characters, field width, precision and length modifiers.
.SH RETURN VALUE
.PP
On success, the function returns the total length of the printed string (excluding the null 
terminator).

.RS
\- If the format string contains only a "%" character the function will return -1.


\- If an unsupported specifier is encountered, the function will print the "%" character 
followed by this unsupported character.


\- If an invalid format string is encountered, the function returns 
the length of the string processed so far.
.RE
.PP
.SH EXAMPLES
.PP
.B Print a character

.I _printf("Character:[%c]", 'H');
.RS
Output: Character:[H]
.br
Return value: 14
.RE
.PP
.B Print a string

.I _printf("String:[%s]", "I am a string !");
.RS
Output: String:[I am a string!]
.br
Return value: 24
.RE
.PP
.B Print a literal percent sign

.I _printf("Percent:[%%]");
.RS
Output: Percent:[%]
.br
Return value: 12
.RE
.PP
.B Print an integer/decimal

.I _printf("Positive:[%d], Negative[%i]", 1024, -1024);
.RS
Output: Positive:[1024], Negative[-1024]
.br
Return value: 33
.RE
.SH AUTHORS
.PP
Pablo Nudel & Uyed Debara
## 7. Specifiers ⚒︎
List of specifiers that the function handles:
  specifiers	|DESCRIPTION|
|:---:|:---:|
|`%c`	|Print a single character.|
|`%s`	|Print a string.|
|`%%`	|Print a literal percent sign.|
|`%d`	|Print a decimal integer.
|`%i`	|Print an integer (same as %d).|

## 8. Flowchart 📊

![App Screenshot](https://raw.githubusercontent.com/pablonudel/holbertonschool-printf/refs/heads/pablonudel/printf_funtion_flowchart.jpg)


## Authors 🧑‍🧑‍🧒

- [@pablonudel](https://www.github.com/pablonudel)
- [@Iyed13tns](https://www.github.com/Iyed13tns)
