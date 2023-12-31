Write a function that fills memory with a constant byte.
1. Prototype: char *_memset(char *s, char b, unsigned int n);
2. The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
3. Returns a pointer to the memory area s
FYI: The standard library provides a similar function: memset. Run man memset to learn more.

Write a function that copies memory area.
1. Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
2. The _memcpy() function copies n bytes from memory area src to memory area dest
3. Returns a pointer to dest
FYI: The standard library provides a similar function: memcpy. Run man memcpy to learn more.

Write a function that locates a character in a string.
1. Prototype: char *_strchr(char *s, char c);
2. Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
FYI: The standard library provides a similar function: strchr. Run man strchr to learn more.

Write a function that gets the length of a prefix substring.
1. Prototype: unsigned int _strspn(char *s, char *accept);
2. Returns the number of bytes in the initial segment of s which consist only of bytes from accept
FYI: The standard library provides a similar function: strspn. Run man strspn to learn more.

Write a function that searches a string for any of a set of bytes.
1. Prototype: char *_strpbrk(char *s, char *accept);
2. The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
3. Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
FYI: The standard library provides a similar function: strpbrk. Run man strpbrk to learn more.

Write a function that locates a substring.
1. Prototype: char *_strstr(char *haystack, char *needle);
2. The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared
3. Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
FYI: The standard library provides a similar function: strstr. Run man strstr to learn more.

Write a function that prints the chessboard.
1. Prototype: void print_chessboard(char (*a)[8]);

Write a function that prints the sum of the two diagonals of a square matrix of integers.
1. Prototype: void print_diagsums(int *a, int size);
2. Format: see example
3. You are allowed to use the standard library
Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
