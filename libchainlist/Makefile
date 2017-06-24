CC=gcc
CCFLAGS=-W -Werror -Wall

TARGET_A=libchainlist.a
TARGET_H=res/chainlist.h
TARGET_MAN=res/chainlist.3

DIR_TO_A=/usr/local/lib
DIR_TO_H=/usr/local/include
DIR_TO_MAN=/usr/local/man/man3

SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

LIB=libchainlist.a

ALL: $(LIB)

.PHONY: clean, fclean

$(LIB): $(OBJ)
	ar r $(LIB) $(OBJ)
	ranlib $(LIB)
	

install:
	@if [ ! -f $(LIB) ]; then 	\
		echo "You should run 'make' before installing";\
		exit 1;	\
	fi
	mv $(LIB) $(DIR_TO_A)
	mv $(TARGET_H) $(DIR_TO_H)
	mv $(TARGET_MAN) $(DIR_TO_MAN)
	@echo "Installation complete"
	@echo "Compile with -lchainlist, see man chainlist for details"



%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET_A)
