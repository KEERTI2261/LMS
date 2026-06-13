#include<stdio.h>
#include"lms.h"

void list_issued_books(void)
{
    struct issue *temp = ihead;
    if(ihead == NULL)
    {
        printf("\nNo Issued Books\n");
        return;
    }
    printf("\n============================================================================================================\n");
    printf("%-8s %-7s %-7s %-15s %-15s %-15s %-15s %-5s\n",
           "IssueID","BookID","UserID","UserName","IssueDate","DueDate","ReturnDate","Fine");

    printf("============================================================================================================\n");
    while(temp)
    {
        printf("%-8d %-7d %-7d %-15s %-15s %-15s %-15s %-5d\n",
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
    printf("============================================================================================================\n");
}
