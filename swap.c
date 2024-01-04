#include "monty.h"

/**
 * swap - Swaps the top two elements of the stack.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the bytecode file.
 *
 * Description:
 * - This function represents the "swap" Monty bytecode instruction.
 * - It swaps the positions of the top two elements on the stack.
 * - The function receives a pointer to the stack and the current line number
 * for potential error reporting.
 *
 * Return: None.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	tmp_n = tmp->n;
	tmp->n = tmp_n;

	tmp->n = tmp->next->n;
	tmp->next->n = tmp_n;

}
