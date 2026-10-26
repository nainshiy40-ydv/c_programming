#include <stdio.h>
struct Book
{
    int book_id;
    char title[50];
    char author[50];
    float price;
};
void printBook(struct Book b)
{
    printf("\nBook ID = %d", b.book_id);
    printf("\nTitle = %s", b.title);
    printf("\nAuthor = %s", b.author);
    printf("\nPrice = %.2f", b.price);
}
int main()
{
    struct Book b1 = {101, "C Programming", "Dennis Ritchie", 450.50};
    printBook(b1);
    return 0;
}
