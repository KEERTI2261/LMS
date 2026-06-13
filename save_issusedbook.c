#include<stdio.h>
#include"lms.h"

void save_issued_books(void)
{
    FILE *fp;
    struct issue *temp = ihead;
    fp = fopen("issued.txt","w");
    if(fp == NULL)
    {
        printf("File Open Error\n");
        return;
    }
    while(temp)
    {
        fprintf(fp,"%d|%d|%d|%s|%s|%s|%s|%d\n",
                temp->issue_id,
                temp->book_id,
                temp->user_id,
                temp->user_name,
                temp->issue_date,
                temp->due_date,
                temp->return_date,
                temp->fine);
        temp = temp->next;
    }
    fclose(fp);
    printf("Issued Books Saved Successfully\n");
}
