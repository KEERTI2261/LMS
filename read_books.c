#include<stdio.h>
#include<stdlib.h>
#include"lms.h"

void read_books(void)
{
    FILE *fp = fopen("books.txt","r");
    struct book *newnode, *temp;

    if(fp == NULL)
        return;
    head = NULL;
    while(1)
    {
        newnode = malloc(sizeof(struct book));
        if(newnode == NULL)
            break;
        if(fscanf(fp,"%d %s %s %d",
                  &newnode->book_id,
                  newnode->title,
                  newnode->author,
                  &newnode->quantity) != 4)
        {
            free(newnode);
            break;
        }
        newnode->next = NULL;
        if(head == NULL)
            head = newnode;
        else
        {
            temp = head;
            while(temp->next)
                temp = temp->next;
            temp->next = newnode;
        }
    }
    fclose(fp);
}
