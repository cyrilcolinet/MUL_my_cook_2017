## Makefile hiredis library

SRC = 	async.c\
	dict.c\
	hiredis.c\
	net.c\
	read.c\
	sds.c

OBJ = 	$(SRC:.c=.o)

CC = 	gcc

CFLAGS = -Wall -Wextra -I./include

all: 	$(OBJ)
	ar rcs libredis.a $(OBJ)

clean:
	rm -rf $(OBJ)
	rm -rf libredis.a
