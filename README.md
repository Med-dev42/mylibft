*This project has been created as part
of the 42 curriculum by mlazar.*

# Libft

## Description

Libft is my first project at 42. It is a custom C library that
re-implements a set of standard C library functions, plus additional
utility functions for strings, memory, file descriptors and linked lists.
The goal is to understand how these functions work internally and to
build a reusable library for my future projects.

## Library description

`libft.a` is a static C library built from my own implementations of
standard functions and extra helpers. It is declared in `libft.h`.


- **Character functions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`,
  `ft_isascii` and `ft_isprint` return 1 if the character belongs to the
  class and 0 otherwise. `ft_toupper` and `ft_tolower` change the case.
- **Memory functions:** `ft_memset` fills a block with a byte, `ft_bzero`
  zeroes it, `ft_memcpy` copies without overlap, `ft_memmove` copies safely
  even when areas overlap, `ft_memchr` and `ft_memcmp` search and compare
  bytes, and `ft_calloc` allocates zeroed memory with an overflow check.
- **String functions:** `ft_strlen` gets the length, `ft_strlcpy` and
  `ft_strlcat` copy and concatenate with a size limit, `ft_strchr` and
  `ft_strrchr` find a character, `ft_strncmp` compares strings,
  `ft_strnstr` finds a substring, `ft_strdup` duplicates a string and
  `ft_atoi` converts a string to an int.
- **Functions that allocate:** `ft_substr` extracts part of a string,
  `ft_strjoin` joins two strings, `ft_strtrim` removes a set of characters
  from both ends, `ft_split` splits a string by a delimiter into an array,
  `ft_itoa` converts an int to a string, and `ft_strmapi` builds a new
  string by applying a function to each character. `ft_striteri` applies
  a function to each character in place.
- **File descriptor output:** `ft_putchar_fd`, `ft_putstr_fd`,
  `ft_putendl_fd` and `ft_putnbr_fd` write to a given file descriptor.
- **Linked lists:** `t_list` has a `content` pointer and a `next` pointer.
  `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize` and
  `ft_lstlast` create and inspect lists. `ft_lstdelone` and `ft_lstclear`
  free nodes, `ft_lstiter` applies a function to each node, and
  `ft_lstmap` builds a new list from the result of a function.

## Instructions

Compile the library:

```bash
make
```

This creates `libft.a`. Other Makefile rules: `make clean`,
`make fclean`, `make re`.

Use it in your project:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

## Resources

- `man` pages for the re-implemented functions
- Documentation on the C programming language and on linked lists
- Testers used: Libftest, libftTester

### AI usage

AI was used for the following tasks:
- Reviewing my finished code for edge cases and norm issues (all functions).
- Explaining how the testers work and how to read their output.
- Understanding the concept of linked lists (`ft_lst*` functions).

I wrote and tested all the code myself.
