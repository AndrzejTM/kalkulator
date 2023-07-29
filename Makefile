kalkulator: skaner.l parser.y header.h
	bison -d parser.y
	flex skaner.l
	gcc -o $@ parser.tab.c lex.yy.c funkcje.c

clear:
	rm -r lex.yy.c parser.tab.c parser.tab.h kalkulator