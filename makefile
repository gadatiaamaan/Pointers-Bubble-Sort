CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# Name of your executable
TARGET = pointers_and_bubbles

# Source files
SRCS = pointers_and_bubbles.c

# Object files
OBJS = $(SRCS:.c=.o)

# Compilation rule
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Rule for compiling source files
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -f $(OBJS) $(TARGET)
