#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct buss_s - contain file args
 * @arg: a value
 * @file: pointer to a file
 * @cont: line cont
 * @liifii: flag change
 */
typedef struct buss_s
{
	char *arg;
	FILE *file;
	char *cont;
	int liifii;
}  buss;
extern buss bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *, unsigned int, unsigned int);
ssize_t getstdin(char **, int);
char  *clean_line(char *);
void f_push(stack_t **, unsigned int);
void f_pall(stack_t **, unsigned int);
void f_pint(stack_t **, unsigned int);
int execute(char *, stack_t **, unsigned int, FILE *);
void free_stack(stack_t *);
void f_pop(stack_t **, unsigned int);
void f_swap(stack_t **, unsigned int);
void f_add(stack_t **, unsigned int);
void f_nop(stack_t **, unsigned int);
void f_sub(stack_t **, unsigned int);
void f_div(stack_t **, unsigned int);
void f_mul(stack_t **, unsigned int);
void f_mod(stack_t **, unsigned int);
void f_pchar(stack_t **, unsigned int);
void f_pstr(stack_t **, unsigned int);
void f_rotl(stack_t **, unsigned int);
void f_rotr(stack_t **, __attribute__((unused)) unsigned int);
void addnode(stack_t **, int );
void addqueue(stack_t **, int);
void f_queue(stack_t **, unsigned int);
void f_stack(stack_t **, unsigned int);
#endif
