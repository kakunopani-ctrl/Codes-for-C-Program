//PROGRAM:Array of pointer to structure (Book Search)
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

// Binary Search Function
int binary_search(struct Book *books[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (books[mid]->id == key)
            return mid;
        else if (key < books[mid]->id)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    struct Book b1 = {101, "C Programming", "Dennis Ritchie"};
    struct Book b2 = {102, "Data Structures", "Mark Weiss"};
    struct Book b3 = {103, "Operating Systems", "Silberschatz"};

    // Array of pointers to structure (sorted by ID)
    struct Book *books[3] = {&b1, &b2, &b3};

    int searchID;
    printf("Enter book ID to search: ");
    scanf("%d", &searchID);

    int pos = binary_search(books, 3, searchID);
    if (pos != -1) {
        printf("Book found at position %d\n", pos);
        printf("ID: %d\n", books[pos]->id);
        printf("Title: %s\n", books[pos]->title);
        printf("Author: %s\n", books[pos]->author);
    } else {
        printf("Book with ID %d not found.\n", searchID);
    }

    return 0;
}
