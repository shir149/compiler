#ifndef DATA__H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#ifndef ERRORS_HOLDER_H
#define ERRORS_HOLDER_H

void handleError(int errorCode);

#endif
typedef struct Node_struct
{
    int type;
    char *key;
    void **variables;
    int var_count;
    struct Node_struct *next;
    struct Node_struct *prev;
} Node_struct;

#define COLLECTION_VAR 0
#define SET_VAR 1
#define STR_VAR 2
#define INT_VAR 3
#define HELPER 846

Node_struct *initialize(int type, const char *key);

void set_variables(Node_struct *node, void **new_variables, int new_var_count);

void set_variables_by_key(char *key, void **new_variables, int new_var_count, Node_struct *head);

Node_struct *copy_node(Node_struct *node);

bool copy_all_variables(char *dest_node_key, char *source_node_key, void *head);

char *get_key(Node_struct *node);

int get_type(Node_struct *node);

Node_struct *get_next(Node_struct *node);

Node_struct *get_prev(Node_struct *node);

void print_all(Node_struct *head);

void print_node(Node_struct *node);

void add_node(Node_struct **head, Node_struct *new_node);

void add_variable(Node_struct *node, void *value);

Node_struct *search_node(Node_struct *head, const char *key);

void delete_node(Node_struct **head, const char *key);

void free_node(Node_struct *node);

void free_all(Node_struct *head);

void **get_all_variables(Node_struct *node);

bool equal_nodes(char *node_1, char *node2_name, void *head);

bool equal_condition(char *left, char *right, char *operation, void *head);

bool plus_two_node(char *main, char *left_key, char *stmt_helper, void *head);

bool check_operation(char *left, char *right, const char *operation, void *head);

bool minus_operation(char *left, char *right, void *head);

bool plus_operation(char *left, char *right, void *head);

bool and_operation(char *node_1, char *node2_name, void *head);

bool assignments_variables(char *left_node, char *right_node, char *operator, void * head);

#endif