#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the bytecode file.
 */
void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || !*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: Error: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
