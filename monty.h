#ifndef MONTY_H
#define MONTY_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* macro variable */
#define SEPARATOR " \n\t\r"


/* stack structors */
/**
 * struct stack_s - A structor that doubly linked list representation
 * of a queue
 * @n: integer variable
 * @prev: points to the previous element of the queue
 * @next: points to the next element of the queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/* Global variable */
extern stack_t **global_free;

/**
 * struct instruction_s - A structor opcode and its function
 * @opcode: the opcode variable
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* header functions */
int read_line(FILE *monty_file);
void monty_function(char *operator, stack_t **stack, unsigned int count_lines);
stack_t *add_node(stack_t **h, const int n);
void m_push(stack_t **stack, unsigned int line_number);
size_t print_rev(stack_t *h);
void m_pint(stack_t **stack, unsigned int line_number);
size_t print(stack_t *h);
void free_all(void);
void m_swap(stack_t **h, unsigned int line_number);
void m_nop(stack_t **h, unsigned int line_number);
void m_pall(stack_t **stack, unsigned int line_number);
int delete_node(stack_t **h, unsigned int index);
void m_pop(stack_t **h, unsigned int line_number);
void m_add(stack_t **h, unsigned int line_number);
void m_sub(stack_t **h, unsigned int line_number);
void m_mul(stack_t **h, unsigned int line_number);
void m_div(stack_t **h, unsigned int line_number);
void m_mod(stack_t **h, unsigned int line_number);
void m_pchar(stack_t **h, unsigned int line_number);
void m_pstr(stack_t **h, unsigned int line_number);
void m_rotl(stack_t **h, unsigned int line_number);
void m_rotr(stack_t **h, unsigned int line_number);

#endif /* MONTY_H*/
