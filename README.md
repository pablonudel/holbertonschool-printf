# Project Function _printf 🤖

## 1. Overview 📚

The _printf project aims to recreate a simplified version of the printf function in C. This function is designed to display formatted output on the screen using a format string along with additional arguments.

The primary goal of this project is to learn how to handle multiple arguments within a function, organize your code efficiently, and develop clean and maintainable coding practices.

## 2. The compile command ⬇️

To compile the program it was used this compiler:

`gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

##  3. Requirements 📝

Here’s a summarized version of the general requirements for this project:

* Allowed Editors: `vi`, `vim`, `emacs`.
* Compilation Environment: Ubuntu 20.04 LTS with [gcc](https://gcc.gnu.org/install/ ) 
* File Format: All files must end with a new line.
* Code Style: Follow the [Betty](https://github.com/hs-hq/Betty ) style.
* Global Variables: No global variables allowed.
* Function Limit: Maximum of 5 functions per file.
* Function Prototypes: Declare all function prototypes in a main.h header file.
* If needed, you must implement the _putchar function yourself.

## 4. Examples of Usage 📋

Example program that uses _printf function:

```c
#include "main.h"

int main(void)
{
    int len;

    len = _printf("This is a simple string.\n");
    _printf("The length of the string is: %d\n", len);

    _printf("Character: %c\n", 'H');
    _printf("String: %s\n", "Holberton");
    _printf("Percentage: %%\n");
    _printf("Positive: %d, Negative: %i\n", 1024, -1024);

    return (0);
}
```
```
Expected Output:

This is a simple string.
The length of the string is: 25
Character: H
String: Holberton
Percentage: %
Positive: 1024, Negative: -1024
```

## 5. Man Page: A Comprehensive Guide 🟥

Commande for execute the Man Page: `man ./man_3_printf.`

Screenshot
![Man Screenshot](https://raw.githubusercontent.com/pablonudel/holbertonschool-printf/refs/heads/pablonudel/man_page.jpg)

## 6. Specifiers ⚒︎

This function does not handle all possible format specifiers available in the standard printf function and is limited to the set listed below.

  SPECIFIERS	|DESCRIPTION|
|:---:|:---:|
|`c`	|Print a single character.|
|`s`	|Print a string.|
|`%`	|Print a literal percent sign.|
|`i`	|Print a integer|
|`d`	|Print an decimal (signed decimal integer).|

## 7. Flowchart 📊

![Flowchart](https://raw.githubusercontent.com/pablonudel/holbertonschool-printf/refs/heads/pablonudel/printf_funtion_flowchart.jpg)

## Authors 💻

[@pablonudel](https://www.github.com/pablonudel) & [@Iyed13tns](https://www.github.com/Iyed13tns)
