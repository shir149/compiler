#ifndef HELPERS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define STRING_SIZE 1024
#define BUFFER_SIZE 1024
#define MAX_STRINGS 100
#define MAX_STATEMENTS 100

typedef struct
{
    char *left;
    char *right;
} CutString;

void cut_print_res(CutString *result);

int is_number(const char *str);

int evaluate_condition(int left, int right, const char *operation);

int evaluate_operation(int left, int right, const char *operation);

int stringCounter(char **array);

int check_char_digit(char c);

char **cut_string_by_coma(char *input); //

int compare_string(const char *str1, const char *str2); //

int int_count(int *array, int check);

int char_count(char *array, char check);

int list_counter(void **list);

char *strdup_func(const char *s); //

char *delete_spaces(char *str);

void delete_spares(char *str);

char **translate_to_statements(char *block);

char **exstract_strings(char **left_array, char **right_array, int left_size, int right_size);

char **handle_each_literal(const char *contentBlock, int *num_statements);

char *delete_spares_before(const char *str);

char *get_first_word(const char *str);

char *int_to_string(int value);

CutString *split_string(char *input, char delimiter);

char **concat_arrays(char **left, char **right, int left_size, int right_size);


#endif