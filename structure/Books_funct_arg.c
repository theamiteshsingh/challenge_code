#include<stdio.h>
#include<string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

void printBook(struct Books book );

int main()
{
    struct Books Book1;
    struct Books Book2;

    /*Book 1 specification*/
    strcpy(Book1.title, "Amitesh singh books");
    strcpy(Book1.author, "Amitesh singh");
    strcpy(Book1.subject, "Basics of life principles");
    Book1.book_id=565;

    /*Book 2 specification*/

    strcpy(Book2.title, "Kanupriya s");
    strcpy(Book2.author, "Kanu");
    strcpy(Book2.subject, "Basics of life happines techiques");
    Book2.book_id=545;

    /*print book 1 info*/

    printBook( Book1 );

    /*print book 1 info*/

    printBook( Book2 );
}
void printBook(struct Books book ){
    
    printf("Book title:: %s\n", book.title);
    printf("Book author:: %s\n", book.author);
    printf("Book subject:: %s\n", book.subject);
    printf("Book book_id:: %d\n", book.book_id);
}