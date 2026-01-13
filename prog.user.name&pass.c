#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isAlphanumeric(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalnum((unsigned char)str[i])) {
            return 0;  // Not alphanumeric
        }
    }
    return 1;  // All characters are valid
}

int main() {
    char enteredPassword[20];
    const char username[] = "=kardu";
    const char password[] = "nuhuh0";

    printf("Username (static): %s\n", username);

    printf("Enter your password (exactly 6 characters): ");
    scanf("%19s", enteredPassword);

    // Check length first
    if (strlen(enteredPassword) != 6) {
        printf("\nError: Password must be exactly 6 characters long.\n");
        return 0;
    }

    // Check if password is alphanumeric
    if (!isAlphanumeric(enteredPassword)) {
        printf("\nError: Password must contain only letters and digits.\n");
        return 0;
    }

    // Compare with correct password
    if (strcmp(enteredPassword, password) == 0) {
        printf("\nLogin successful! Welcome, %s.\n", username);
    } else {
        printf("\nLogin failed: Incorrect password.\n");
    }

    return 0;
}
