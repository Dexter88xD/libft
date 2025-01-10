# libft

`libft` is a custom C library that provides a wide range of utility functions. It includes standard library functions for string manipulation, memory management, and more, along with custom implementations of linked list operations. This library is commonly used in projects as a foundational set of tools for other C programs.

---

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [File Structure](#file-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

---

## Introduction

`libft` is a custom implementation of several standard C functions and additional utilities, designed to make programming in C more efficient and modular. It includes a comprehensive set of functions for handling strings, memory, file descriptors, and even linked lists. This project is part of the 42 coding school curriculum, providing essential building blocks for C-based applications.

---

## Features

- **String Manipulation**: Functions to convert, search, concatenate, and manipulate strings:
  - `ft_atoi()`: Convert a string to an integer.
  - `ft_itoa()`: Convert an integer to a string.
  - `ft_strdup()`: Duplicate a string.
  - `ft_strlen()`: Calculate the length of a string.
  - `ft_strchr()`: Locate the first occurrence of a character in a string.
  - `ft_strrchr()`: Search for the last occurrence of a character in a string.
  - `ft_strncmp()`: Compare two strings up to a specified number of characters.
  - `ft_strnstr()`: Locate a substring in a string within a specified length.
  - `ft_strlcpy()`: Copy up to a specified number of characters from one string to another.
  - `ft_strlcat()`: Concatenate two strings up to a specified size.
  - `ft_strjoin()`: Concatenate two strings.
  - `ft_strtrim()`: Trim characters from both ends of a string.
  - `ft_substr()`: Create a substring from a string.
  - `ft_strmapi()`: Create a new string by applying a function to each character of an existing string.
  - `ft_striteri()`: Apply a function to each character of a string.
  - `ft_split()`: Split a string into an array of strings.

- **Memory Management**: Functions to allocate, copy, set, and free memory:
  - `ft_memcpy()`: Copy memory from one location to another.
  - `ft_memmove()`: Safely copy memory with overlap.
  - `ft_memset()`: Set a block of memory to a specific value.
  - `ft_memchr()`: Locate a character in a block of memory.
  - `ft_memcmp()`: Compare two blocks of memory.
  - `ft_calloc()`: Allocate memory and initialize it to zero.
  - `ft_bzero()`: Zero out a block of memory.

- **Linked List Operations**: A full set of functions to manage and manipulate linked lists:
  - `ft_lstadd_back()`: Add an element to the end of a linked list.
  - `ft_lstadd_front()`: Add an element to the front of a linked list.
  - `ft_lstclear()`: Clear all elements of a linked list.
  - `ft_lstiter()`: Iterate over a linked list and apply a function to each element.
  - `ft_lstlast()`: Get the last element of a linked list.
  - `ft_lstmap()`: Create a new linked list by applying a function to each element.
  - `ft_lstnew()`: Create a new linked list element.
  - `ft_lstsize()`: Count the number of elements in a linked list.
  - `ft_lstdelone()`: Delete a single element from the linked list.

- **File I/O Operations**: Functions for handling file descriptors and output to files:
  - `ft_putchar_fd()`: Write a character to a file descriptor.
  - `ft_putstr_fd()`: Write a string to a file descriptor.
  - `ft_putendl_fd()`: Write a string followed by a newline to a file descriptor.
  - `ft_putnbr_fd()`: Write an integer to a file descriptor.

- **Character Checking**: Functions to check and classify characters:
  - `ft_isalnum()`: Check if a character is alphanumeric.
  - `ft_isalpha()`: Check if a character is alphabetic.
  - `ft_isdigit()`: Check if a character is a digit.
  - `ft_isascii()`: Check if a character is an ASCII character.
  - `ft_isprint()`: Check if a character is printable.
  - `ft_tolower()`: Convert a character to lowercase.
  - `ft_toupper()`: Convert a character to uppercase.

---

## File Structure

The repository is organized into the following files:

```
└── Dexter88xD-libft/
        ├── README.md
        ├── LICENSE
        ├── Makefile
        ├── ft_atoi.c
        ├── ft_bzero.c
        ├── ft_calloc.c
        ├── ft_isalnum.c
        ├── ft_isalpha.c
        ├── ft_isascii.c
        ├── ft_isdigit.c
        ├── ft_isprint.c
        ├── ft_itoa.c
        ├── ft_lstadd_back_bonus.c
        ├── ft_lstadd_front_bonus.c
        ├── ft_lstclear_bonus.c
        ├── ft_lstdelone_bonus.c
        ├── ft_lstiter_bonus.c
        ├── ft_lstlast_bonus.c
        ├── ft_lstmap_bonus.c
        ├── ft_lstnew_bonus.c
        ├── ft_lstsize_bonus.c
        ├── ft_memchr.c
        ├── ft_memcmp.c
        ├── ft_memcpy.c
        ├── ft_memmove.c
        ├── ft_memset.c
        ├── ft_putchar_fd.c
        ├── ft_putendl_fd.c
        ├── ft_putnbr_fd.c
        ├── ft_putstr_fd.c
        ├── ft_split.c
        ├── ft_strchr.c
        ├── ft_strdup.c
        ├── ft_striteri.c
        ├── ft_strjoin.c
        ├── ft_strlcat.c
        ├── ft_strlcpy.c
        ├── ft_strlen.c
        ├── ft_strmapi.c
        ├── ft_strncmp.c
        ├── ft_strnstr.c
        ├── ft_strrchr.c
        ├── ft_strtrim.c
        ├── ft_substr.c
        ├── ft_tolower.c
        ├── ft_toupper.c
        └── libft.h
```

---

## Installation

To integrate `libft` into your project, follow these steps:

1. **Clone the Repository**  
   Clone the `libft` repository:  
   ```bash
   git clone https://github.com/Dexter88xD/libft.git
   ```

2. **Navigate to the Repository**  
   Move into the cloned directory:  
   ```bash
   cd libft
   ```

3. **Compile the Library**  
   Use the `Makefile` to build the library:
   ```bash
   make
   ```

4. **Link the Library to Your Project**  
   Include the `libft.h` header file in your source code and link the compiled `libft.a` static library during compilation:  
   ```bash
   gcc your_program.c libft.a -o your_program
   ```

---

## Usage

Below is an example demonstrating the use of `libft` functions:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World!";
    
    // Using ft_strlen to get the length of a string
    int length = ft_strlen(str);
    printf("The length of the string is: %d\n", length);
    
    // Using ft_itoa to convert an integer to a string
    int num = 42;
    char *num_str = ft_itoa(num);
    printf("The integer as a string: %s\n", num_str);
    
    // Remember to free the memory allocated by ft_itoa
    free(num_str);
    
    return (0);
}
```

---

## Contributing

Contributions are welcome! Feel free to:
- Open an issue for bug reports or feature requests.
- Submit a pull request with your enhancements or fixes.

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more information.
