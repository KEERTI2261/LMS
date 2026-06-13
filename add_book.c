#include<stdio.h>
#include<stdlib.h>
#include"lms.h"

void add_book(void)
{
    struct book *new, *temp;
    int last_id = 100;
    new = malloc(sizeof(struct book));
    if(new == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }
    temp = head;
    while(temp)
    {
        last_id = temp->book_id;
        temp = temp->next;
    }
    new->book_id = last_id + 1;
    printf("Book ID : %d\n",new->book_id);
    printf("Enter Title : ");
    scanf(" %[^\n]",new->title);
    printf("Enter Author : ");
    scanf(" %[^\n]",new->author);
    printf("Enter Quantity : ");
    scanf("%d",&new->quantity);
    new->next = NULL;
    if(head == NULL)
    {
        head = new;
    }
    else
    {
        temp = head;
        while(temp->next)
            temp = temp->next;
        temp->next = new;
    }
    printf("Book Added Successfully\n");
}
