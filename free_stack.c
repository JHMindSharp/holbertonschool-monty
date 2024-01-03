#include "monty.h"

/**
 * free_stack - Frees a stack.
 * @stack: The stack to be freed.
 */
void free_stack(stack_t *head)
{
    stack_t *temp;

    while (head)
    {
        temp = head->next;
        free(head);
        head = temp;
    }
}
