#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the bytecode file.
 *
 * Description:
 * - This function represents the "pop" Monty bytecode instruction.
 * - It removes (pops) the top element from the stack.
 * - The function receives a pointer to the stack and the current line number
 * for potential error reporting.
 *
 * Return: None.
 */
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return;
	(*stack)->prev = NULL;
}
