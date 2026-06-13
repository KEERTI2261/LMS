#ifndef LMS_H
#define LMS_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book
{
    int book_id;
    char title[50];
    char author[50];
    int quantity;
    struct book *next;
};

struct issue
{
    int issue_id;
    int book_id;
    int user_id;
    char user_name[50];
    char issue_date[20];
    char due_date[20];
    char return_date[20];
    int fine;
    struct issue *next;
};

extern struct book *head;
extern struct issue *ihead;

void add_book(void);
void update_book(void);
void remove_book(void);
void search_book(void);
void view_books(void);

void issue_book(void);
void return_book(void);
void list_issued_books(void);

void save_books(void);
void save_issued_books(void);
void read_books(void);
void read_issued_books(void);

void update_by_id(void);
void update_by_name(void);

void remove_by_id(void);
void remove_by_name(void);

void search_by_id(void);
void search_by_name(void);
void search_by_author(void);

void exit_program(void);
void save_data(void);

#endif
