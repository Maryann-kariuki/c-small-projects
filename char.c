#include<stdio.h>
int main() {
    // Declare character variables
    char letter1 = 'A';
    char letter2 = 'B';
    
    // Print individual characters
    printf("First letter: %c\n", letter1);
    printf("Second letter: %c\n", letter2);

    // Character arithmetic (ASCII values)
    printf("Next letter after %c is: %c\n", letter1, letter1 + 1); // Adds 1 to 'A' -> 'B'
    
    // Take a character input from the user
    char userLetter;
    printf("Enter a letter: ");
    scanf(" %c", &userLetter); // Notice the space before %c to ignore whitespace
    
    // Display the user's input
    printf("You entered: %c\n", userLetter);

    return 0;
}
