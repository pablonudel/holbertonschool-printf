# Project Function _printf 🤖


## 1. Overview 📚

The _printf project aims to recreate a simplified version of the printf function in C. This function is designed to display formatted output on the screen using a format string along with additional arguments.

The primary goal of this project is to learn how to handle multiple arguments within a function, organize your code efficiently, and develop clean, maintainable coding practices.
## 2. The compile command ⬇️

to compile the program we must use this compiler:

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c'
##  3. Requirements 📝

* Here’s a summarized version of the general requirements for your project:

* Allowed Editors: `vi`, `vim`, `emacs`.

* Compilation Environment: Ubuntu 20.04 LTS with gcc using the 

* File Format: All files must end with a new line.

* README.md: Include a README.md file at the root of the project.

* Code Style: Follow the Betty style (checked with betty-style.pl and betty-doc.pl).

* Global Variables: No global variables allowed.

  Function Limit: Maximum of 5 functions per file.

* Main.c Files: Do not push provided main.c files; they will be 
  ignored during compilation.

* Function Prototypes: Declare all function prototypes in a main.h header file.

* eader Files: Include guards must be present in all header files.

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
## 7. Elements ⚒︎
 
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
