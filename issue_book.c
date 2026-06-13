#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"lms.h"

#define LOAN_DAYS 7  

void issue_book(void)
{
    int bid;
    struct book *btemp = head;
    struct issue *newnode;
    time_t t;
    struct tm tm_info;

    printf("Enter Book ID : ");
    scanf("%d",&bid);
    /* Find book */
    while(btemp)
    {
        if(btemp->book_id == bid)
            break;
        btemp = btemp->next;
    }
    if(btemp == NULL)
    {
        printf("Book Not Found\n");
        return;
    }
    if(btemp->quantity <= 0)
    {
        printf("Book Not Available\n");
        return;
    }
    newnode = (struct issue*)malloc(sizeof(struct issue));
    if(newnode == NULL)
    {
        printf("Memory Allocation Failed\n");
        return;
    }
    printf("Enter Issue ID : ");
    scanf("%d",&newnode->issue_id);
    printf("Enter User ID : ");
    scanf("%d",&newnode->user_id);
    printf("Enter User Name : ");
    scanf(" %[^\n]",newnode->user_name);
    newnode->book_id = bid;
    /* Current Date */
    time(&t);
    tm_info = *localtime(&t);
    strftime(newnode->issue_date,
             sizeof(newnode->issue_date),
             "%d-%m-%Y",
             &tm_info);
    /* Due Date = Issue Date + LOAN_DAYS */
    t += (LOAN_DAYS * 24 * 60 * 60);
    tm_info = *localtime(&t);
    strftime(newnode->due_date,
             sizeof(newnode->due_date),
             "%d-%m-%Y",
             &tm_info);
    strcpy(newnode->return_date, "Not Returned");
    newnode->fine = 0;
    newnode->next = NULL;
    if(ihead == NULL)
    {
        ihead = newnode;
    }
    else
    {
        struct issue *temp = ihead;
        while(temp->next)
            temp = temp->next;
        temp->next = newnode;
    }
    btemp->quantity--;
    printf("\n====================================\n");
    printf(" BOOK ISSUED SUCCESSFULLY\n");
    printf("====================================\n");
    printf("Book ID         : %d\n", btemp->book_id);
    printf("Book Title      : %s\n", btemp->title);
    printf("User Name       : %s\n", newnode->user_name);
    printf("Issue Date      : %s\n", newnode->issue_date);
    printf("Due Date        : %s\n", newnode->due_date);
    printf("Remaining Books : %d\n", btemp->quantity);
    printf("====================================\n");
}
