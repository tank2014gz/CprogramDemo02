//
// Created by 于立焱 on 2020/1/1.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * 结构体的定义
 * @return
 */

struct Books {
    char title[20];
    char author[20];
    int id;
    float price;

} book = {"C语言基础", "zero", 200, 30.0f};


int main() {
    struct Books book1;
    struct Books book2;

    strcpy(book1.title, "c++ book");
    strcpy(book1.author, "99");
    book1.id = 100;
    book1.price = 70.99f;

    printf("book1 title=%s,book1 author=%s, book1 id=%d, book1 price=%f\n", book1.title, book1.author, book1.id,
           book1.price);
    printf("book title=%s,book author=%s, book id=%d, book price=%f\n", book.title, book.author, book.id, book.price);
    struct Books *ptr_book;
    ptr_book = &book1;

    printf("ptr_book title=%s,ptr_book author=%s, ptr_book id=%d, ptr_book price=%f\n", ptr_book->title,
           ptr_book->author, ptr_book->id,
           ptr_book->price);
    printf("(*ptr_book). title=%s,(*ptr_book). author=%s, (*ptr_book).id=%d, (*ptr_book).price=%f\n", (*ptr_book).title,
           (*ptr_book).author, (*ptr_book).id,
           (*ptr_book).price);

}