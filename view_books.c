#include<stdio.h>
#include"lms.h"
void view_books(void)
{
    struct book *temp=head;
    if(temp==NULL)
    {
        printf("\nNo Books Available\n");
        return;
    }
    printf("\n=========================================================\n");
    printf("ID\tTITLE\t\tAUTHOR\t\tQUANTITY\n");
    printf("=========================================================\n");
    while(temp)
    {
        printf("%d\t%s\t\t%s\t\t%d\n",
               temp->book_id,
               temp->title,
               temp->author,
               temp->quantity);

        temp=temp->next;
    }
}
