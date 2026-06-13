#include<stdio.h>
#include"lms.h"

void save_books(void)
{
    FILE *fp;
    struct book *temp = head;
    fp = fopen("books.txt","w");
    if(fp == NULL)
    {
        printf("File Open Error\n");
        return;
    }
    while(temp)
    {
        fprintf(fp,"%d|%s|%s|%d\n",
                temp->book_id,
                temp->title,
                temp->author,
                temp->quantity);
        temp = temp->next;
    }
    fclose(fp);
    printf("Books Saved Successfully\n");
}
