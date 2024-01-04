#include "monty.h"

/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: The current line number in the bytecode file.
 *
 * This function adds the top two elements of the stack. The result is
 * stored in the second top element of the stack, and the top element
 * is removed. If the stack contains less than two elements, the function
 * prints an error message and exits.
 */
void add(stack_t **stack, unsigned int line_number)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_number);
	(*stack)->n = result;
}
