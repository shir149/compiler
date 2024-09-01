#include "utility_functions.h"
#include <ctype.h>
#include <stdbool.h>
int count_strings(char **array)
{
    int count = 0;
    while (array[count] != NULL)
        count++;
    return count;
}

int check_char_digit(char c)
{
    return isalnum(c);
}

char **cut_string_by_coma(char *input)
{

    char **array = malloc(MAX_STRINGS * sizeof(char *));
    if (!array)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        exit(1);
    }

    int count = 0;
    input++;
    input[strlen(input) - 1] = '\0';
    char *token = strtok(input, ", ");
    while (token != NULL)
    {
        if (token[0] == '\"')
        {
            token++;
            token[strlen(token) - 1] = '\0';
        }
        array[count] = malloc((strlen(token) + 1) * sizeof(char));
        if (!array[count])
        {
            fprintf(stderr, "Couldn't Allocate Memory\n");
            exit(1);
        }
        strcpy(array[count], token);
        count++;
        token = strtok(NULL, ", ");
    }
    array[count] = NULL;
    return array;
}

int compare_string(const char *str1, const char *str2)
{
    while (*str1 && (*str1 == *str2))
    {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

int int_count(int *array, int check)
{
    int count = 0;
    while (array[count] != check)
    {
        count++;
    }
    return count;
}

int char_count(char *array, char check)
{
    int count = 0;
    while (array[count] != check)
    {
        count++;
    }
    return count;
}

char *int_to_string(int value)
{
    char buffer[1024];
    sprintf(buffer, "%d", value);
    char *result = malloc(sizeof(char) * (strlen(buffer) + 1));
    if (result == NULL)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        return NULL;
    }
    strcpy(result, buffer);
    return result;
}

int is_number(const char *str)
{

    if (*str == '\0')
        return 0;
    if (*str == '-' || *str == '+')
        str++;
    if (*str == '\0')
        return 0;
    while (*str)
    {
        if (!isdigit(*str))
            return 0;
        str++;
    }
    return 1;
}

int evaluate_condition(int left, int right, const char *operation)
{
    if (strcmp(operation, "<=") == 0)
        return left <= right;
    if (strcmp(operation, ">=") == 0)
        return left >= right;
    if (strcmp(operation, "==") == 0)
        return left == right;
    if (strcmp(operation, "!=") == 0)
        return left != right;
    if (strcmp(operation, "<") == 0)
        return left < right;
    if (strcmp(operation, ">") == 0)
        return left > right;
    if (strcmp(operation, "TRUE") == 0)
        return true;
    if (strcmp(operation, "FALSE") == 0)
        return false;
    return 0;
}

int evaluate_operation(int left, int right, const char *operation)
{

    if (strcmp(operation, "+") == 0)
        return left + right;
    if (strcmp(operation, "-") == 0)
        return left - right;
    if (strcmp(operation, "*") == 0)
        return left * right;
    if (strcmp(operation, "/") == 0)
        return left / right;
    if (strcmp(operation, "%") == 0)
        return left % right;
    handleError(1);
    return 0;
}

void cut_print_res(CutString *result)
{
    printf("Left: %s\n", result->left);
    printf("Right: %s\n", result->right);
}

CutString *split_string(char *input, char delimiter)
{
    CutString *pair = malloc(sizeof(CutString));
    if (!pair)
    {
        printf("Couldn't Allocate Memory\n");
    }
    char *delimiter_position = strchr(input, delimiter);
    if (!delimiter_position)
    {
        fprintf(stderr, "The Delimiter Dosen't Exist\n");
        free(pair);
        return NULL;
    }
    size_t left_length = delimiter_position - input;
    size_t right_length = strlen(input) - left_length - 1;
    pair->left = malloc((left_length + 1) * sizeof(char));
    pair->right = malloc((right_length + 1) * sizeof(char));
    if (!pair->left || !pair->right)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        free(pair->left);
        free(pair->right);
        free(pair);
        exit(EXIT_FAILURE);
    }
    strncpy(pair->left, input, left_length);
    pair->left[left_length] = '\0';
    strcpy(pair->right, delimiter_position + 1);
    return pair;
}

char **concat_arrays(char **left, char **right, int left_size, int right_size)
{
    int total_size = left_size + right_size;
    char **merged_array = malloc(total_size * sizeof(*merged_array));
    if (merged_array == NULL)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < left_size; i++)
    {
        merged_array[i] = strdup_func(left[i]);
        if (merged_array[i] == NULL)
        {
            for (int j = 0; j < i; j++)
            {
                free(merged_array[j]);
            }
            free(merged_array);
            exit(EXIT_FAILURE);
        }
    }

    for (int i = 0; i < right_size; i++)
    {
        merged_array[i + left_size] = strdup_func(right[i]);
        if (merged_array[i + left_size] == NULL)
        {
            for (int j = 0; j < left_size + i; j++)
            {
                free(merged_array[j]);
            }
            free(merged_array);
            exit(EXIT_FAILURE);
        }
    }

    return merged_array;
}

char *strdup_func(const char *s)
{

    if (s == NULL)
    {
        return NULL;
    }
    char *dup = (char *)malloc(strlen(s) + 1);
    if (dup == NULL)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        exit(EXIT_FAILURE);
    }
    strcpy(dup, s);
    return dup;
}

char *delete_spaces(char *str)
{
    while (isspace((unsigned char)*str))
        str++;

    if (*str == 0)
        return str;

    char *end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end))
        end--;

    *(end + 1) = '\0';

    return str;
}

void delete_spares(char *str)
{
    char *src = str;
    char *dst = str;
    while (*src)
    {
        if (*src != '{' && *src != '}')
        {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

char **translate_to_statements(char *block)
{
    delete_spares(block);

    char **statements = malloc(MAX_STATEMENTS * sizeof(char *));
    if (!statements)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        exit(1);
    }

    int count = 0;
    char *token = strtok(block, ";");
    while (token != NULL)
    {
        token = delete_spaces(token);

        statements[count] = malloc((strlen(token) + 1) * sizeof(char));
        if (!statements[count])
        {
            fprintf(stderr, "Couldn't Allocate Memory\n");
            exit(1);
        }
        strcpy(statements[count], token);
        count++;

        token = strtok(NULL, ";");
    }
    statements[count] = NULL;

    return statements;
}

char **exstract_strings(char **left_array, char **right_array, int left_size, int right_size)
{
    int result_size = left_size;
    char **result = malloc(sizeof(char *) * (result_size + 1));
    if (!result)
    {
        printf("Couldn't Allocate Memory");
        return NULL;
    }

    int i = 0;
    for (int j = 0; j < left_size; j++)
    {
        int is_exist = 0;
        for (int k = 0; k < right_size; k++)
        {
            if (strcmp(left_array[j], right_array[k]) == 0)
            {
                is_exist = 1;
                break;
            }
        }
        if (!is_exist)
        {
            result[i] = left_array[j];
            i++;
        }
        else
        {
            result_size--;
        }
    }
    result[i] = NULL;

    return result;
}

char *delete_spares_before(const char *str)
{
    while (isspace((unsigned char)*str))
        str++;
    return (char *)str;
}

char **handle_each_literal(const char *contentBlock, int *num_statements)
{
    if (contentBlock == NULL)
    {
        *num_statements = 0;
        return NULL;
    }

    char *content_copy = strdup(contentBlock);
    if (content_copy == NULL)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        *num_statements = 0;
        return NULL;
    }

    char *line = strtok(content_copy, "\n");
    char **statements = NULL;
    int count = 0;

    while (line != NULL)
    {
        char *trimmed_line = delete_spares_before(line);
        if (*trimmed_line != '\0')
        {
            char **temp_statements = realloc(statements, sizeof(char *) * (count + 1));
            if (temp_statements == NULL)
            {
                fprintf(stderr, "Couldn't Allocate Memory\n");
                free(content_copy);
                for (int i = 0; i < count; ++i)
                {
                    free(statements[i]);
                }
                free(statements);
                *num_statements = 0;
                return NULL;
            }
            statements = temp_statements;
            statements[count] = strdup(trimmed_line);
            if (statements[count] == NULL)
            {
                fprintf(stderr, "Couldn't Allocate Memory\n");
                free(content_copy);
                for (int i = 0; i < count; ++i)
                {
                    free(statements[i]);
                }
                free(statements);
                *num_statements = 0;
                return NULL;
            }
            count++;
        }

        line = strtok(NULL, "\n");
    }

    free(content_copy);

    char **temp_statements = realloc(statements, sizeof(char *) * (count + 1));
    if (temp_statements == NULL)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        for (int i = 0; i < count; ++i)
        {
            free(statements[i]);
        }
        free(statements);
        *num_statements = 0;
        return NULL;
    }
    statements = temp_statements;
    statements[count] = NULL;

    *num_statements = count;
    return statements;
}

char *get_first_word(const char *str)
{
    if (str == NULL)
    {
        return NULL;
    }

    while (isspace((unsigned char)*str))
        str++;

    const char *end = str;
    while (*end && !isspace((unsigned char)*end))
        end++;

    size_t length = end - str;
    char *word = (char *)malloc(length + 1);
    if (word == NULL)
    {
        fprintf(stderr, "Couldn't Allocate Memory\n");
        return NULL;
    }

    strncpy(word, str, length);
    word[length] = '\0';

    return word;
}

int list_counter(void **list)
{
    int count = 0;
    while (list[count] != NULL)
        count++;
    return count;
}
