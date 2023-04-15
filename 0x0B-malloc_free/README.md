## 0x0B. C - malloc, free

### Learning Objectives
* At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

### Exercise 

[0-create_array.c](./0-create_array.c)
```
Write a function that creates an array of chars, and initializes it with a specific char.
```
* Prototype: char *create_array(unsigned int size, char c);
* Returns NULL if size = 0
* Returns a pointer to the array, or NULL if it fails

[1-strdup.c](./1-strdup.c)
```
Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
```
* Prototype: char *_strdup(char *str);
* The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
* Returns NULL if str = NULL
* On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

