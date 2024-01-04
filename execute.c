#include "monty.h"
/**
 * handle_error - Handles error messages and exits the program
 * @line_number: The current line number in the bytecode file
 * @message: The error message to display
 */
void handle_error(unsigned int line_number, const char *message)
{
	fprintf(stderr, "L%u: Error: %s\n", line_number, message);
	exit(EXIT_FAILURE);
}

/**
 * execute_push - Executes the push instruction
 * @stack: Pointer to the top of the stack
 * @operand: The operand associated with the push instruction
 * @line_number: The current line number in the bytecode file
 */
void execute_push(stack_t **stack, char *operand, unsigned int line_number)
{
	int value;

	if (!operand || !is_numeric(operand))
	{
		handle_error(line_number, "usage: push integer");
	}
	value = atoi(operand);

	push(stack, value);
}

/**
 * execute_instruction - Executes a Monty bytecode instruction
 * @instruction: The instruction to execute
 * @stack: Pointer to the top of the stack
 * @line_number: The current line number in the bytecode file
 * Return: nothing
 */
void execute_instruction(char *instruction, stack_t **stack,
	unsigned int line_number)
{
	char *opcode, *operand;

	if (!instruction || !stack)
		handle_error(line_number, "Invalid instruction or stack");

	opcode = strtok(instruction, " \t\n");
	operand = strtok(NULL, " \t\n");

	if (!opcode)
		handle_error(line_number, "Missing opcode");

	if (strcmp(opcode, "push") == 0)
		execute_push(stack, operand, line_number);
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
		handle_error(line_number, "Unknown instruction");
}

/**
 * is_numeric - Checks if a string is a numeric value
 * @str: The string to check
 * Return: 1 if numeric, 0 otherwise
 */
int is_numeric(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	if (str[0] == '-')
		i++;

	for (; str[i]; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}

	return (1);
}
