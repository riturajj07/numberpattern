# numberpattern
#Number Pattern Generator

#Overview

This repository contains a simple C program to generate a number pattern. The program prints a pattern of numbers, where each row contains the row number repeated a number of times equal to the row number.

#Features

- Prints a pattern of numbers
- Customizable pattern size (currently set to 5)

#Code



int main() {
    int i, j;
    printf("PATTERN\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}


#Output

The program will output the following pattern:

PATTERN
0
11
222
3333
44444
![Screenshot 2024-08-22 214116](https://github.com/user-attachments/assets/289dab4d-fae5-48e6-935c-945935a8f7db)


#Usage

1. Clone the repository: git clone (link unavailable)
2. Navigate to the project directory: cd number-pattern
3. Compile the program using GCC: gcc pattern.c -o pattern
4. Run the program: ./pattern

#Contributing

Contributions are welcome! If you'd like to add a new pattern or improve the program, please fork the repository and submit a pull request.
