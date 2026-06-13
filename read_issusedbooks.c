#include<stdio.h>
#include<stdlib.h>
#include"lms.h"

void read_issued_books(void)
{
    FILE *fp;
    struct issue *newnode, *temp;
    fp = fopen("issued.txt","r");
    if(fp == NULL)
        return;
    /* reset list to avoid duplicate loading */
    ihead = NULL;
    /* skip header line */
    char buffer[200];
    fgets(buffer, sizeof(buffer), fp);
    fgets(buffer, sizeof(buffer), fp);

    while(1)
    {
        newnode = malloc(sizeof(struct issue));
        if(newnode == NULL)
        {
            printf("Memory allocation failed\n");
            break;
        }
        if(fscanf(fp,"%d %d %d %s %s %s %s %d",
                  &newnode->issue_id,
                  &newnode->book_id,
                  &newnode->user_id,
                  newnode->user_name,
                  newnode->issue_date,
                  newnode->due_date,
                  newnode->return_date,
                  &newnode->fine) != 8)
        {
            free(newnode);
            break;
        }
        newnode->next = NULL;
        if(ihead == NULL)
        {
            ihead = newnode;
        }
        else
        {
            temp = ihead;
            while(temp->next)
                temp = temp->next;

            temp->next = newnode;
        }
    }
    fclose(fp);
}
