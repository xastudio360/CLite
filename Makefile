# Makefile for CLite v1.0-beta
CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -pedantic -I.
AR = ar
ARFLAGS = rcs

# Files
SRC = clite_io.c
OBJ = $(SRC:.c=.o)
LIB = libclite.a
EXAMPLE = example
TEST = test_clite_io

# Targets
.PHONY: all clean example test run-test

all: $(LIB)

# Create static library
$(LIB): $(OBJ)
	$(AR) $(ARFLAGS) $@ $^
	@echo "Library $(LIB) created successfully"

# Compile object files
%.o: %.c clite_io.h
	$(CC) $(CFLAGS) -c $< -o $@

# Build example
example: $(LIB) example.c
	$(CC) $(CFLAGS) example.c -L. -lclite -o $(EXAMPLE)
	@echo "Example compiled: ./$(EXAMPLE)"

# Build tests
test: $(LIB) test_clite_io.c
	$(CC) $(CFLAGS) test_clite_io.c -L. -lclite -o $(TEST)
	@echo "Tests compiled: ./$(TEST)"

# Run tests
run-test: test
	@echo ""
	@./$(TEST)

# Full check (build + run tests)
check: run-test
	@echo "Check completed"

# Clean
clean:
	rm -f $(OBJ) $(LIB) $(EXAMPLE) $(TEST)
	@echo "Project cleaned"

# Installation (optional)
install: $(LIB)
	install -d /usr/local/include/clite
	install -m 644 clite_io.h /usr/local/include/clite/
	install -m 644 $(LIB) /usr/local/lib/
	@echo "CLite installed in the system"
