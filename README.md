# libft

## Overview
Libft is a custom C library that replicates essential functions from the standard C library, providing a set of foundational tools that can be reused in future projects. This project is designed to deepen understanding of C programming by rebuilding libc functions and implementing additional useful functions.

## Objectives
1. Recreate a selection of standard C library functions.
2. Implement additional helper functions commonly used in other programming tasks.
3. Provide a foundational library that can be used in subsequent projects.

## Features
- **Basic Functions**: Includes functions to handle memory, strings, and character checks (e.g., `ft_strlen`, `ft_memcpy`, `ft_strchr`).
- **Utility Functions**: Additional functions such as `ft_split` (splits strings) and `ft_itoa` (converts integers to strings).
- **Linked List Functions**: Bonus functions to manage linked lists, such as `ft_lstnew`, `ft_lstadd_front`, and `ft_lstmap`.

## Function Categories
### Part 1 - Libc Functions
Recreation of standard library functions:
- `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memccpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strnstr`, `ft_strncmp`
- `ft_atoi`, `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- `ft_calloc`, `ft_strdup`

### Part 2 - Additional Functions
Extra functions that are not part of the standard library:
- `ft_substr` - Extracts a substring from a string.
- `ft_strjoin` - Concatenates two strings into a new one.
- `ft_strtrim` - Removes leading and trailing whitespace from a string.
- `ft_split` - Splits a string into an array of substrings based on a delimiter.
- `ft_itoa` - Converts an integer to a string.
- `ft_strmapi` - Applies a function to each character of a string to create a new string.


## Usage
- git clone <[repository-url](https://github.com/NorikaNarimatsu/libft)>
- cd libft
- make
- ./libft

## Makefile
- make: Compiles all .c files and generates libft.a.
- make re: Cleans and recompiles the library.
- make clean: Removes all object (.o) files.
- make fclean: Removes all object files and libft.a.



