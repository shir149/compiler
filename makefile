# Compiler and tools
CC := gcc
BISON := bison
FLEX := flex

# Flags
BISON_FLAGS := -d
FLEX_FLAGS :=
CFLAGS := -Wall -g

# Source and object files
SRC_FILES := setlang.tab.c lex.yy.c All_Data.c stack_manager.c error_management.c utility_functions.c logic_handler.c
OBJ_FILES := $(SRC_FILES:.c=.o)

# Default target
default: setlang

# Build the main executable
setlang: $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $@ $^

# Generate Bison parser files
setlang.tab.c: setlang.y
	$(BISON) $(BISON_FLAGS) $<

# Generate Flex lexer files
lex.yy.c: setlang.l
	$(FLEX) $(FLEX_FLAGS) $<

# Clean up generated files
clean:
	rm -f setlang setlang.tab.c setlang.tab.h lex.yy.c $(OBJ_FILES)

.PHONY: default clean
