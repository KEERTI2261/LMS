# LMS
 LIBRARY MANAGEMENT SYSTEM USING C
 
ABSTRACT:-
     The Library Management System is a console-based application developed using the C programming language. The purpose of this project is to automate the management of library records. It helps in maintaining book details, issuing books, returning books, and storing records efficiently. The project uses linked lists for dynamic data storage and file handling for permanent data storage. This system reduces manual work and improves the accuracy of maintaining library records.
     
INTRODUCTION:-
        A library contains a large number of books and maintaining records manually is a time-consuming process. The Library Management System is designed to simplify library operations. It enables librarians to add, update, delete, search, issue, and return books efficiently. The system also stores issued book records and maintains the availability of books.
        
OBJECTIVE:-
* To automate library management activities.
* To maintain book records efficiently.
* To reduce manual paperwork.
* To store data permanently using files.
* To provide quick searching and updating of records.
  
SOFTWARE REQUIREMENTS:-
* Operating System: Linux
* Programming Language: C
* Compiler: GCC
* Editor: Vim / VS Code
  
SYSTEM DESIGN:-
Book Structure
The book structure stores information related to books available in the library.
Fields:
* Book ID
* Title
* Author
* Quantity
  
 Issue Structure:-
The issue structure stores information related to issued books.
Fields:
* Issue ID
* Book ID
* User ID
* User Name
* Issue Date
* Due Date
* Return Date
* Fine Amount
  
MODULES OF THE PROJECT:-
 1. Add Book
This module allows the user to add new books into the library database. The Book ID is generated automatically, and the title, author name, and quantity are stored.
2. Update Book
This module allows modification of existing book details using Book ID or Book Name.
3. Remove Book
This module removes unwanted book records from the library database.
4. Search Book
Books can be searched using:
* Book ID
* Book Name
* Author Name
5. View Books
Displays all books available in the library along with their details.
6. Issue Book
This module issues a book to a user. The system stores:
* Issue ID
* User ID
* User Name
* Issue Date
* Due Date
The available quantity of the book is reduced after issuing.
7. Return Book
This module returns the issued book and updates the return date. The quantity of the book is increased after returning.
8. List Issued Books
Displays all issued book records along with issue and return information.
9. Save Records
Book details are stored in:
books.dat
Issued book details are stored in:
issued.dat
10. Read Records
  When the program starts, records are loaded automatically from files into memory.

DATA STRUCTURES USED:-
Linked List
   The project uses linked lists to store book and issue records dynamically. Linked lists allow efficient insertion and deletion of records without requiring a fixed memory size.

FILE HANDLING:-
The project uses file handling concepts to store records permanently.
Files Used:
1. books.dat
   * Stores all book records.
2. issued.dat
   * Stores all issued book records.

Functions Used:-
* fopen()
* fclose()
* fread()
* fwrite()

ADVANTAGES:-
* Easy to use.
* Fast searching of records.
* Reduces manual effort.
* Permanent storage using files.
* Dynamic memory allocation using linked lists.

LIMITATIONS:-
* Single-user application.
* No graphical user interface.
* No database connectivity.
* Basic security features.
  
FUTURE ENHANCEMENTS:-
* Login authentication.
* Database integration using MySQL.
* GUI-based application.
* Automatic fine calculation.
* Online book reservation.

CONCLUSION:-
    The Library Management System successfully manages library operations such as adding, updating, searching, issuing, and returning books. The project demonstrates the practical implementation of C programming concepts including structures, linked lists, dynamic memory allocation, functions, and file handling. The system provides an efficient solution for maintaining library records and can be extended with advanced features in the future.
