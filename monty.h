<<<<<<< HEAD
#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

=======
#ifndef __MONTY__
#define __MONTY__
#include <stdio.h>
#include <stdlib.h>
>>>>>>> 8f556751a7240b6d774419e1d706612ccacd87f7
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
<<<<<<< HEAD
    int n;
    struct stack_s *prev;
    struct stack_s *next;
=======
        int n;
        struct stack_s *prev;
        struct stack_s *next;
>>>>>>> 8f556751a7240b6d774419e1d706612ccacd87f7
} stack_t;

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
<<<<<<< HEAD
    char *opcode;
    void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int n);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
int is_numeric(char *str);
void execute_instruction(char *line, stack_t **stack, unsigned int line_number);
void free_stack(stack_t *stack);

#endif /* MONTY_H */
=======
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int main(int argc, char *argv[]);

#endif
>>>>>>> 8f556751a7240b6d774419e1d706612ccacd87f7
