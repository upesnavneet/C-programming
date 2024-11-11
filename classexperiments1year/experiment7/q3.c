#include <stdio.h>
#include <string.h>

struct Book 
{
    int book_id;
    char title[100];
    char author[100];
    double price;
};

void printBookDetails(struct Book book) 
{
    printf("Book ID: %d\n", book.book_id);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Price: %.2lf\n", book.price);
}

int main()
{
    struct Book book;

    printf("Enter book ID: ");
    scanf("%d", &book.book_id);
    getchar();
    printf("Enter title: ");
    fgets(book.title, sizeof(book.title), stdin);
    printf("Enter author: ");
    fgets(book.author, sizeof(book.author), stdin);
    printf("Enter price: ");
    scanf("%lf", &book.price);

    printBookDetails(book);

    return 0;
}
