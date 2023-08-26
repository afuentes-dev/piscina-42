CC = gcc
CFLAGS = -Wall -Wextra
TARGET = rush02

SRCS = main.c funciones_rush.c rush02.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c milib.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re

