p: mainlib.o add_book.o update_book.o delate_book.o search_book.o view_books.o issue_book.o return_book.o list_issuedbook.o save_book.o save_issusedbook.o exit_prg.o read_books.o read_issusedbooks.o
	cc mainlib.o add_book.o update_book.o delate_book.o search_book.o view_books.o issue_book.o return_book.o list_issuedbook.o save_book.o save_issusedbook.o exit_prg.o read_books.o read_issusedbooks.o -o p

mainlib.o: mainlib.c
	cc -c mainlib.c

add_book.o: add_book.c
	cc -c add_book.c

update_book.o: update_book.c
	cc -c update_book.c

delate_book.o: delate_book.c
	cc -c delate_book.c

search_book.o: search_book.c
	cc -c search_book.c

view_books.o: view_books.c
	cc -c view_books.c

issue_book.o: issue_book.c
	cc -c issue_book.c

return_book.o: return_book.c
	cc -c return_book.c

list_issuedbook.o: list_issuedbook.c
	cc -c list_issuedbook.c

save_book.o: save_book.c
	cc -c save_book.c

save_issusedbook.o: save_issusedbook.c
	cc -c save_issusedbook.c

exit_prg.o: exit_prg.c
	cc -c exit_prg.c

read_books.o: read_books.c
	cc -c read_books.c

read_issusedbooks.o: read_issusedbooks.c
	cc -c read_issusedbooks.c



