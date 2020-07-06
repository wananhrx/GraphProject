search-cli: main.o
	cc -o search-cli main.o

main.o:
	cc -c main.c search.c stats.c

.PHONY:clean

clean:
	rm -f main.o
