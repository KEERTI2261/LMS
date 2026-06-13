#include<stdio.h>
#include<string.h>
#include"lms.h"

void search_by_id(void)
{
    int id;
    struct book *temp = head;

    printf("Enter Book ID : ");
    scanf("%d",&id);

    while(temp)
    {
        if(temp->book_id == id)
        {
            printf("\nBook Found\n");
            printf("Book ID   : %d\n",temp->book_id);
            printf("Title     : %s\n",temp->title);
            printf("Author    : %s\n",temp->author);
            printf("Quantity  : %d\n",temp->quantity);
            return;
        }

        temp = temp->next;
    }

    printf("Book Not Found\n");
}

void search_by_name(void)
{
    char name[50];
    struct book *temp = head;

    printf("Enter Book Name : ");
    scanf(" %[^\n]",name);

    while(temp)
    {
        if(strcmp(temp->title,name) == 0)
        {
            printf("\nBook Found\n");
            printf("Book ID   : %d\n",temp->book_id);
            printf("Title     : %s\n",temp->title);
            printf("Author    : %s\n",temp->author);
            printf("Quantity  : %d\n",temp->quantity);
            return;
        }

        temp = temp->next;
    }

    printf("Book Not Found\n");
}

void search_by_author(void)
{
    char author[50];
    struct book *temp = head;

    printf("Enter Author Name : ");
    scanf(" %[^\n]",author);

    while(temp)
    {
        if(strcmp(temp->author,author) == 0)
        {
            printf("\nBook Found\n");
            printf("Book ID   : %d\n",temp->book_id);
            printf("Title     : %s\n",temp->title);
            printf("Author    : %s\n",temp->author);
            printf("Quantity  : %d\n",temp->quantity);
            return;
        }

        temp = temp->next;
    }

    printf("Book Not Found\n");
}

void search_book(void)
{
    char ch;

    while(1)
    {
        printf("\n=====================\n");
        printf(" SEARCH BOOK\n");
        printf("=====================\n");
        printf("A. By Book ID\n");
        printf("B. By Book Name\n");
        printf("C. By Author Name\n");
        printf("D. Back\n");

        printf("Enter Choice : ");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                search_by_id();
                break;

            case 'B':
            case 'b':
                search_by_name();
                break;

            case 'C':
            case 'c':
                search_by_author();
                break;

            case 'D':
            case 'd':
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}
