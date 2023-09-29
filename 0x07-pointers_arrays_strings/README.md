# 0x07. C - Even more pointers, arrays and strings

This repository contains C programs that demonstrate various concepts related to pointers, arrays, and strings. Each program corresponds to a specific task, and the details of each task are provided below.

## Task 0: memset
- **File**: [0-memset.c](0-memset.c)
- **Description**: Write a function that fills memory with a constant byte.
- **Prototype**: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`.
- Returns a pointer to the memory area `s`.

## Task 1: memcpy
- **File**: [1-memcpy.c](1-memcpy.c)
- **Description**: Write a function that copies memory area.
- **Prototype**: `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies `n` bytes from the memory area `src` to the memory area `dest`.
- Returns a pointer to `dest`.

## Task 2: strchr
- **File**: [2-strchr.c](2-strchr.c)
- **Description**: Write a function that locates a character in a string.
- **Prototype**: `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found.

## Task 3: strspn
- **File**: [3-strspn.c](3-strspn.c)
- **Description**: Write a function that gets the length of a prefix substring.
- **Prototype**: `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`.

## Task 4: strpbrk
- **File**: [4-strpbrk.c](4-strpbrk.c)
- **Description**: Write a function that searches a string for any of a set of bytes.
- **Prototype**: `char *_strpbrk(char *s, char *accept);`
- The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`.
- Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found.

## Task 5: strstr
- **File**: [5-strstr.c](5-strstr.c)
- **Description**: Write a function that locates a substring.
- **Prototype**: `char *_strstr(char *haystack, char *needle);`
- The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared.
- Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

## Task 6: Chess is mental torture
- **File**: [7-print_chessboard.c](7-print_chessboard.c)
- **Description**: Write a function that prints the chessboard.
- **Prototype**: `void print_chessboard(char (*a)[8]);`
- This function prints a chessboard represented as an 8x8 matrix of characters.

## Task 7: The line of life is a ragged diagonal between duty and desire
- **File**: [8-print_diagsums.c](8-print_diagsums.c)
- **Description**: Write a function that prints the sum of the two diagonals of a square matrix of integers.
- **Prototype**: `void print_diagsums(int *a, int size);`
- This function calculates and prints the sums of the two diagonals of a square matrix of integers.

Feel free to explore the code for each task by clicking on the respective file links above.
