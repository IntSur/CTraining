#include <stdio.h>
#include <time.h>
#include <string.h>

struct BOOK
{
    char bookname[10];
    int page;
    int word;
} book1;

void getSeconds(unsigned long *ptr);
void changeArray(int *arraytobechanged);
void changeBOOK(struct BOOK *book);

int main() {
    unsigned long seconds;
    int array1[] = {0, 0, 0};

    strcpy(book1.bookname, "Elon Musk");
    book1.page = 110;
    book1.word = -1;

    getSeconds(&seconds);
    changeArray(&array1[0]);
    changeBOOK(&book1);

    printf("second = %d\n", seconds);
    printf("array1 = %d %d %d\n", array1[0],  array1[1], array1[2]);
    printf("book1's information = %s, %d, %d\n", book1.bookname, book1.page, book1.word);
    return 0;
}

void getSeconds(unsigned long *ptr) {
    *ptr = time(NULL);
    return;
}

void changeArray(int *arraytobechanged) {
    *(arraytobechanged + 2) = 4;
    return;
}

void changeBOOK(struct BOOK *book) {
    strcpy(book->bookname, "Steve Jobs");
    book->page = 180;
    book->word = -2;
    return;
}