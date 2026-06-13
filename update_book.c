#include<stdio.h>
#include<string.h>
#include"lms.h"

void update_by_id(void)
{
    int id;
    struct book *temp = head;

    printf("Enter Book ID to Update : ");
    scanf("%d",&id);

    while(temp)
    {
        if(temp->book_id == id)
        {
            printf("Enter New Title : ");
            scanf(" %[^\n]",temp->title);

            printf("Enter New Author : ");
            scanf(" %[^\n]",temp->author);

            printf("Enter New Quantity : ");
            scanf("%d",&temp->quantity);

            printf("Book Updated Successfully\n");
            return;
        }

        temp = temp->next;
    }

    printf("Book Not Found\n");
}

void update_by_name(void)
{
    char name[50];
    struct book *temp = head;

    printf("Enter Book Name : ");
    scanf(" %[^\n]",name);

    while(temp)
    {
        if(strcmp(temp->title,name)==0)
        {
            printf("Enter New Title : ");
            scanf(" %[^\n]",temp->title);

            printf("Enter New Author : ");
            scanf(" %[^\n]",temp->author);

            printf("Enter New Quantity : ");
            scanf("%d",&temp->quantity);

            printf("Book Updated Successfully\n");
            return;
        }

        temp = temp->next;
    }

    printf("Book Not Found\n");
}

void update_book(void)
{
    char ch;

    while(1)
    {
        printf("\n=========================\n");
        printf(" UPDATE BOOK DETAILS\n");
        printf("=========================\n");
        printf("A. By Book ID\n");
        printf("B. By Book Name\n");
        printf("D. Back\n");

        printf("Enter Choice : ");
        scanf(" %c",&ch);

        switch(ch)
        {
            case 'A':
            case 'a':
                update_by_id();
                break;

            case 'B':
            case 'b':
                update_by_name();
                break;

            case 'D':
            case 'd':
                return;

            default:
                printf("Invalid Choice\n");
        }
    }
}
