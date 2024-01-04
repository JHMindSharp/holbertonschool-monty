#include "monty.h"

/**
 * execute_instruction - Executes a Monty bytecode instruction.
 * @instruction: The instruction to execute.
 * @stack: Pointer to the top of the stack.
 * @line_number: Current line number in the bytecode file.
 *
 * Description:
 * - This function takes a Monty bytecode instruction, executes it based on the
 * operation it specifies, and manages the stack accordingly.
 * - It receives the instruction, a pointer to the stack, and the current line
 * number for error reporting purposes.
 * - The function identifies the operation to perform and executes
 * it on the stack.
 *
 * Return: None.
 */
void execute_instruction(char *instruction, stack_t **stack,
	unsigned int line_number)
{
	char *opcode, *operand;

	opcode = strtok(instruction, " \t\n");
	operand = strtok(NULL, " \t\n");

	if (!opcode)
		return;

	if (strcmp(opcode, "push") == 0)
		push(stack, line_number, operand);
	else if (strcmp(opcode, "pall") == 0)
		pall(stack, line_number);
	else if (strcmp(opcode, "nop") == 0)
		nop(stack, line_number);
	else if (strcmp(opcode, "add") == 0)
		add(stack, line_number);
	else if (strcmp(opcode, "swap") == 0)
		swap(stack, line_number);
	else if (strcmp(opcode, "pop") == 0)
		pop(stack, line_number);
	else if (strcmp(opcode, "pint") == 0)
		pint(stack, line_number);
	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
}
