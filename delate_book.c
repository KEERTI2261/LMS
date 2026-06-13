#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"lms.h"

void remove_by_id(void)
{
    int id;
    struct book *temp = head;
    struct book *prev = NULL;

    printf("Enter Book ID : ");
    scanf("%d",&id);

    while(temp)
    {
        if(temp->book_id == id)
            break;

        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Book Not Found\n");
        return;
    }

    if(prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("Book Removed Successfully\n");
}

void remove_by_name(void)
{
    char name[50];
    struct book *temp = head;
    struct book *prev = NULL;

    printf("Enter Book Name : ");
    scanf(" %[^\n]",name);

    while(temp)
    {
        if(strcmp(temp->title,name) == 0)
            break;

        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Book Not Found\n");
        return;
    }

    if(prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("Book Removed Successfully\n");
}

void remove_book(void)
{
    char ch;

    while(1)
    {
        printf("\n=====================\n");
        printf(" REMOVE BOOK\n");
        printf("=====================\n");
        printf("A. By Book ID\n");
        printf("B. By Book Name\n");
        printf("D. Back\n");

        printf("Enter Choice : ");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                remove_by_id();
                break;

            case 'B':
            case 'b':
                remove_by_name();
                break;

            case 'D':
            case 'd':
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}
