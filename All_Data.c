#include "All_Data.h"
#include "error_management.h"
char *result_operation = "alfred";
int count = 0;

Node_struct *initialize(int type, const char *key)
{
    Node_struct *new_node = (Node_struct *)malloc(sizeof(Node_struct));
    if (!new_node)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }
    new_node->type = type;
    new_node->key = strdup(key);
    new_node->variables = NULL;
    new_node->var_count = 0;
    new_node->next = NULL;
    new_node->prev = NULL;
    return new_node;
}

void add_node(Node_struct **head, Node_struct *new_node)
{
    if (*head == NULL)
    {
        *head = new_node;
    }
    else
    {
        Node_struct *current = *head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = new_node;
        new_node->prev = current;
    }
}

void add_variable(Node_struct *node, void *value)
{
    node->variables = realloc(node->variables, sizeof(void *) * (node->var_count + 1));
    if (!node->variables)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return;
    }
    node->variables[node->var_count] = value;
    node->var_count++;
}

Node_struct *search_node(Node_struct *head, const char *key)
{
    Node_struct *current = head;
    while (current != NULL)
    {
        if (strcmp(current->key, key) == 0)
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void print_node(Node_struct *node)
{
    if (node == NULL)
        return;
    if (node->type == COLLECTION_VAR)
    {
        printf("{");
        for (int i = 0; i < node->var_count; i++)
        {
            printf(" %s,", node->variables[i]);
        }
        printf("}\n");
    }
    else if (node->type == SET_VAR)
    {
        printf("[");
        for (int i = 0; i < node->var_count; i++)
        {
            printf("%d", node->variables[i]);
            if (i < node->var_count - 1)
            {
                printf(",");
            }
        }
        printf("]\n");
    }
    else if (node->type == STR_VAR)
    {
        printf("%s\n", node->variables);
    }
    else if (node->type == INT_VAR)
    {
        printf("%d\n", node->variables);
    }
    else if (node->type == HELPER)
    {
        printf("{");
        for (int i = 0; i < node->var_count; i++)
        {
            printf(" %s,", node->variables[i]);
        }
        printf("}\n");
    }
}

void print_all(Node_struct *head)
{
    Node_struct *current = head;
    while (current != NULL)
    {
        print_node(current);
        current = current->next;
    }
}

void delete_node(Node_struct **head, const char *key)
{
    Node_struct *deleteNode = search_node(*head, key);
    if (!deleteNode)
        return;

    if (deleteNode->prev)
    {
        deleteNode->prev->next = deleteNode->next;
    }
    else
    {
        *head = deleteNode->next;
    }
    if (deleteNode->next)
    {
        deleteNode->next->prev = deleteNode->prev;
    }

    free_node(deleteNode);
}

void free_node(Node_struct *node)
{
    if (node == NULL)
        return;
    free(node->key);
    for (int i = 0; i < node->var_count; i++)
    {
        free(node->variables[i]);
    }
    free(node->variables);
    free(node);
}

void free_all(Node_struct *head)
{
    Node_struct *current = head;
    Node_struct *next;
    while (current != NULL)
    {
        next = current->next;
        free_node(current);
        current = next;
    }
}

void **get_all_variables(Node_struct *node)
{
    return node->variables;
}

char *get_key(Node_struct *node)
{
    return node->key;
}

int get_type(Node_struct *node)
{
    return node->type;
}

Node_struct *get_next(Node_struct *node)
{
    return node->next;
}

Node_struct *get_prev(Node_struct *node)
{
    return node->prev;
}

void set_variables_by_key(char *key, void **new_variables, int new_var_count, Node_struct *head)
{
    Node_struct *node = search_node(head, key);
    if (node == NULL)
    {
        fprintf(stderr, "didn't find the wanted node %s \n", key);
        return;
    }
    for (int i = 0; i < node->var_count; i++)
    {
        free(new_variables[i]);
    }
    node->variables = (void **)malloc(sizeof(void *) * new_var_count);
    node->var_count = new_var_count;
    for (int i = 0; i < new_var_count; i++)
    {
        node->variables[i] = new_variables[i];
    }
}

void set_variables(Node_struct *node, void **new_variables, int new_var_count)
{
    for (int i = 0; i < node->var_count; i++)
    {
        free(node->variables[i]);
    }
    free(node->variables);
    node->variables = (void **)malloc(sizeof(void *) * new_var_count);
    if (!node->variables)
    {
        fprintf(stderr, "Memory allocation failed\n");
        node->var_count = 0;
        return;
    }
    for (int i = 0; i < new_var_count; i++)
    {
        if (node->type == SET_VAR || node->type == COLLECTION_VAR)
        {
            if (node->type == COLLECTION_VAR)
            {
                node->variables[i] = new_variables[i];
            }
            else
            {
                printf("new_variables[%d] = %d\n", i, new_variables[i]);
                node->variables[i] = atoi(new_variables[i]);
            }
        }
    }
    node->var_count = new_var_count;
}

Node_struct *copy_node(Node_struct *node)
{
    Node_struct *new_node = initialize(node->type, node->key);
    new_node->variables = malloc(node->var_count * sizeof(void *));
    new_node->var_count = node->var_count;
    for (int i = 0; i < node->var_count; i++)
    {
        new_node->variables[i] = node->variables[i];
    }
    return new_node;
}

bool plus_operation(char *left, char *right, void *head)
{
    Node_struct *left_node = search_node(head, left);
    Node_struct *right_node = search_node(head, right);
    Node_struct *result_node = search_node(head, result_operation);

    if (left_node == NULL || right_node == NULL || result_node == NULL || (left_node->type + right_node->type) % 2 != 0)
    {
        if (right_node == NULL)
        {
            if (left_node->type == COLLECTION_VAR) /* add */
            {

                int new_size = left_node->var_count + 1;
                void **new_variables = (void **)malloc(sizeof(void *) * new_size);

                for (int i = 0; i < left_node->var_count; i++)
                {
                    new_variables[i] = left_node->variables[i];
                }

                new_variables[left_node->var_count] = right;
                result_node->variables = new_variables;
                result_node->var_count = new_size;
                return true;
            }
        }
        return false;
    }
    else
    {
        if (left_node->type != right_node->type)
        {
            if (left_node->type == SET_VAR || right_node->type == SET_VAR)
            {
                int new_size = left_node->var_count + 1;
                void **new_variables = (void **)malloc(sizeof(void *) * new_size);

                for (int i = 0; i < left_node->var_count; i++)
                {
                    new_variables[i] = left_node->variables[i];
                }

                new_variables[left_node->var_count] = right_node->variables;
                result_node->variables = new_variables;
                result_node->var_count = new_size;
                return true;
            }
            else if (left_node->type == COLLECTION_VAR || right_node->type == COLLECTION_VAR)
            {
                int new_size = left_node->var_count + 1;
                void **new_variables = (void **)malloc(sizeof(void *) * new_size);

                for (int i = 0; i < left_node->var_count; i++)
                {
                    new_variables[i] = left_node->variables[i];
                }

                new_variables[left_node->var_count] = right_node->variables;
                result_node->variables = new_variables;
                result_node->var_count = new_size;
                return true;
            }
        }
    }
}

bool plus_two_node(char *main_key, char *left_key, char *stmt_helper, void *head)
{
    Node_struct *main_node = search_node(head, main_key);
    Node_struct *left_node = search_node(head, left_key);
    Node_struct *helper_node = search_node(head, stmt_helper);

    if (main_node == NULL || left_node == NULL || helper_node == NULL || (left_node->type + helper_node->type) % 2 != 0)
    {
        return false;
    }

    if (left_node->type == SET_VAR || left_node->type == COLLECTION_VAR)
    {
        int new_size = left_node->var_count + (helper_node->var_count - 1);
        void **new_variables = (void **)malloc(sizeof(void *) * new_size);
        for (int i = 0; i < left_node->var_count; i++)
        {
            new_variables[i] = left_node->variables[i];
        }

        for (int i = 0; i < helper_node->var_count - 1; i++)
        {
            new_variables[left_node->var_count + i] = helper_node->variables[i];
        }
        free(main_node->variables);
        main_node->variables = new_variables;
        main_node->var_count = new_size;
        return true;
    }

    return false;
}

bool minus_operation(char *left, char *right, void *head)
{
    Node_struct *left_node = search_node(head, left);
    Node_struct *right_node = search_node(head, right);
    Node_struct *result_node = search_node(head, result_operation); 
    if (left_node == NULL || right_node == NULL || result_node == NULL)
    {
        return false;
    }

    if (left_node->type == SET_VAR || left_node->type == COLLECTION_VAR)
    {
        int new_size = 0;
        void **new_variables = (void **)malloc(sizeof(void *) * left_node->var_count);

        for (int i = 0; i < left_node->var_count; i++)
        {
            bool is_exist = false;
            for (int j = 0; j < right_node->var_count; j++)
            {
                if (strcmp((char *)left_node->variables[i], (char *)right_node->variables[j]) == 0)
                {
                    is_exist = true;
                    break;
                }
            }
            if (!is_exist)
            {
                new_variables[new_size++] = left_node->variables[i];
            }
        }
        result_node->variables = new_variables;
        result_node->var_count = new_size;
        left_node->variables = realloc(new_variables, sizeof(void *) * new_size);
        left_node->var_count = new_size;
        return true;
    }
    else
    {
        return false;
    }
}

bool and_operation(char *node_1, char *node_2, void *head)
{
    Node_struct *node1 = search_node(head, node_1);
    Node_struct *node2 = search_node(head, node_2);
    Node_struct *result_node = search_node(head, result_operation);
    if (node1 == NULL || node2 == NULL || result_node == NULL)
    {
        return false;
    }

    if ((node1->type == SET_VAR || node1->type == COLLECTION_VAR) &&
        (node2->type == SET_VAR || node2->type == COLLECTION_VAR))
    {

        int new_size = 0;
        void **new_variables = (void **)malloc(sizeof(void *) * node1->var_count);
        for (int i = 0; i < node1->var_count; i++)
        {
            bool is_exist = false;
            for (int j = 0; j < node2->var_count; j++)
            {
                if (strcmp((char *)node1->variables[i], (char *)node2->variables[j]) == 0)
                {
                    is_exist = true;
                    break;
                }
            }
            if (is_exist)
            {
                new_variables[new_size++] = node1->variables[i];
            }
        }

        result_node->variables = new_variables;
        result_node->var_count = new_size;
        result_node->variables = realloc(new_variables, sizeof(void *) * new_size);
        return true;
    }
    else
    {
        return false;
    }
}

bool assignments_variables(char *left_node, char *right_node, char *operator, void * head)
{
    printf("left_node = %s\n", left_node);
    if (strcmp(operator, "+") == 0)
    {
        return plus_operation(left_node, right_node, head);
    }
}

bool copy_all_variables(char *dest_node_key, char *source_node_key, void *head)
{
    Node_struct *dest_node = search_node(head, dest_node_key);
    Node_struct *source_node = search_node(head, source_node_key);

    if (!source_node || !source_node->variables)
    {
        dest_node->variables = NULL;
        return false;
    }

    dest_node->variables = (void **)malloc(sizeof(void *) * source_node->var_count);

    if (!dest_node->variables)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return false;
    }

    for (int i = 0; i < source_node->var_count; i++)
    {
        dest_node->variables[i] = source_node->variables[i]; 
    }

    dest_node->var_count = source_node->var_count;
    return true;
}

bool equal_nodes(char *node_1, char *node_2, void *head)
{
    Node_struct *node1 = search_node(head, node_1);
    Node_struct *node2 = search_node(head, node_2);
    if (node1 == NULL || node2 == NULL)
    {
        return false;
    }

    if (node1->type != node2->type || node1->var_count != node2->var_count)
    {
        return false;
    }

    for (int i = 0; i < node1->var_count; i++)
    {
        bool is_exist = false;
        for (int j = 0; j < node2->var_count; j++)
        {
            if (strcmp((char *)node1->variables[i], (char *)node2->variables[j]) == 0)
            {
                is_exist = true;
                break;
            }
        }
        if (!is_exist)
        {
            return false;
        }
    }

    return true;
}

bool equal_condition(char *left, char *right, char *operation, void *head)
{
    if (strcmp(operation, "==") == 0)
    {
        return equal_nodes(left, right, head);
    }
    else if (strcmp(operation, "!=") == 0)
    {
        return !equal_nodes(left, right, head);
    }
    else
    {
        handleError(INVALID_OPERATOR_ERROR);
    }
}

bool check_operation(char *left, char *right, const char *operation, void *head)
{
    Node_struct *left_node = search_node(head, left);
    int int_right_value;
    char *str_right_value;
    Node_struct *right_node;
    if (is_number(right))
    {
        int right_value = atoi(right);
        if (left_node->type == SET_VAR || left_node->type == COLLECTION_VAR)
        {
            return evaluate_condition(left_node->var_count, right_value, operation);
        }
        else
        {
            if (left_node->type == INT_VAR)
            {
                return evaluate_condition(left_node->variables, right_value, operation);
            }
        }
    }
    else
    {
        if (left_node->type == COLLECTION_VAR)
        {
            return equal_condition(left, right, operation, head);
        }
        return evaluate_condition(left_node->variables, right, operation);
    }

    return false;
}