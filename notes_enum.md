# C Enums

- Special type that represents a group of constants (unchangeable values).

```c
// Considered good practice to use caps.
enum Level {
    LOW,
    MEDIUM,
    HIGH
};
```

To access the enum, create a variable of it, and assign a value:

```c
//The value must be one of the items in side the enum.
enum Level myVar = MEDIUM;
```

The first item has the value of 0, etc.:

```c
#include <stdio.h>
int main() {
    // Create an enum var and assign value:
    enum Level myVar = MEDIUM;

    // Print (will output 1)
    printf("%d", myVar);

    return 0;
}
```

## Change Values

```c
enum Level {
    LOW = 25,
    MEDIUM = 50,
    HIGH = 75
};

enum Level myVar = MEDIUM;

printf("%d", myVar); // Outputs 50
```

```c
enum Level {
    LOW = 5,
    MEDIUM, // defaults to 6
    HIGH    // defaults to 7
}
```

## Enum in a Switch Statement

Enums are often used in switch statements to check for corresponding values:

```c
enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
}

int main() {
    enum Level myVar = MEDIUM;

    switch (myVar) {
        case 1:
            printf("Low Level");
            break;
        case 2:
            printf("Medium Level");
        case 3:
            printf("High Level");
            break;
    }
    return 0;
}
```

## Why And When To Use Enums

- Used to give names to constants, making the code easier to read and maintain.
- Use enums when you have values that you know aren't going to change, like month days, days, colours, deck of cards, etc.

