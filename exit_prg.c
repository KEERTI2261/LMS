#include<stdio.h>
#include<stdlib.h>
#include"book.h"
void exit_program(void)
{
    save_books();
    //save_issued_books();
    printf("\nAll Data Saved Successfully\n");
    printf("Exiting Library Management System...\n");
    exit(0);
}
