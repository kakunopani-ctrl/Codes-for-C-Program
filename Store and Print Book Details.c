#include <stdio.h>

// Define a structure to store book details
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    // Initialize an array of 5 books with fixed values
    struct Book books[5] = {
        {"The C Programming Language", "Brian W. Kernighan & Dennis M. Ritchie", 450.00},
        {"Clean Code", "Robert C. Martin", 550.50},
        {"Introduction to Algorithms", "Thomas H. Cormen", 999.99},
        {"Operating System Concepts", "Abraham Silberschatz", 720.75},
        {"Computer Networks", "Andrew S. Tanenbaum", 640.25}
    };

    // Print all book details
    printf("\n--- Book Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price : %.2f\n", books[i].price);
        printf("----------------------\n");
    }

    return 0;
}
