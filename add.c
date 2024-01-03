#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the bytecode file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int len = 0, temporary;

	while (current)
	{
		current = current->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%u: Error: can't add, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	current = *stack;
	temporary = current->n + current->next->n;
	current->next->n = temporary;
	pop(stack, line_number);
}
