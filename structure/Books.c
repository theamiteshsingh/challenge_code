#include<stdio.h>
#include<string.h>

struct books{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
};

int main()
{
    struct books Book1;
    struct books Book2;

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

    /*Print book 1 data*/

    printf("Book 1 title : %s\n",Book1.title);
    printf("Book 1 Author: %s\n",Book1.author);
    printf("Book 1 Subject : %s\n",Book1.subject);
    printf("Book 1 id : %d\n",Book1.book_id);
    
    /*Print book 2 data*/

    printf("Book 2 title : %s\n",Book2.title);
    printf("Book 2 Author: %s\n",Book2.author);
    printf("Book 2 Subject : %s\n",Book2.subject);
    printf("Book 2 id : %d\n",Book2.book_id);
}