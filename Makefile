NAME=fakenr
CC=g++
CFLAGS=-lpthread
SRC=src/main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(SRC) -o build/$(NAME) $(CFLAGS)

clean:
	rm -f build/$(NAME)

run: all
	./build/$(NAME)

.PHONY: all clean run