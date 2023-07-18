Define a new type struct dog with the following elements:
1. name, type = char *
2. age, type = float
3. owner, type = char *

Write a function that initialize a variable of type struct dog
1. Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Write a function that prints a struct dog
1. Prototype: void print_dog(struct dog *d);
2. Format: see example bellow
3. You are allowed to use the standard library
4. If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
5. If d is NULL print nothing.

Define a new type dog_t as a new name for the type struct dog.

Write a function that creates a new dog.
1. Prototype: dog_t *new_dog(char *name, float age, char *owner);
2. You have to store a copy of name and owner
3. Return NULL if the function fails

Write a function that frees dogs.
1. Prototype: void free_dog(dog_t *d);


