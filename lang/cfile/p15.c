
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 10
#define MAX_TITLE_LENGTH 100

// Structure to represent a book
typedef struct {
    char title[MAX_TITLE_LENGTH];
    float price;
    int copies;
} Book;

// Function to read book data
void readBookData(Book *books, int n) {
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Enter title: ");
        fgets(books[i].title, MAX_TITLE_LENGTH, stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0; // Remove trailing newline
        printf("Enter price: ");
        scanf("%f", &books[i].price);
        printf("Enter number of copies: ");
        scanf("%d", &books[i].copies);
        getchar(); // Consume newline left in input buffer
    }
}

// Function to display book data
void displayBookData(Book *books, int n) {
    for (int i = 0; i < n; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Price: %.2f\n", books[i].price);
        printf("Copies: %d\n\n", books[i].copies);
    }
}

// Function to display books costing more than Rs 200
void displayExpensiveBooks(Book *books, int n) {
    int count = 0;
    printf("Books costing more than Rs 200:\n");
    for (int i = 0; i < n; i++) {
        if (books[i].price > 200) {
            count++;
            printf("Book %d:\n", i + 1);
            printf("Title: %s\n", books[i].title);
            printf("Price: %.2f\n", books[i].price);
            printf("Copies: %d\n\n", books[i].copies);
        }
    }
    if (count == 0) {
        printf("No books found costing more than Rs 200.\n");
    }
}

int main() {
    Book books[MAX_BOOKS];

    // Read data for 10 books
    readBookData(books, MAX_BOOKS);

    // Display all book data
    printf("\nAll Book Data:\n");
    displayBookData(books, MAX_BOOKS);

    // Display books costing more than Rs 200
    printf("\n");
    displayExpensiveBooks(books, MAX_BOOKS);

    return 0;
}

