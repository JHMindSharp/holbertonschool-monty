#include "monty.h"

/**
 * pint - Prints the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the bytecode file.
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
