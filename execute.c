#include "monty.h"

/**
 * execute_instruction - Executes a Monty bytecode instruction
 * @instruction: The instruction to execute
 * @stack: Pointer to the top of the stack
 * @line_number: The current line number in the bytecode file
 */
void execute_instruction(char *instruction, stack_t **stack,
unsigned int line_number)
{
	if (!instruction || !stack)
	{
		fprintf(stderr, "L%u: Error: Invalid instruction or stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	char *opcode, *operand;

	opcode = strtok(instruction, " \t\n");
	operand = strtok(NULL, " \t\n");

	if (!opcode)
	{
		fprintf(stderr, "L%u: Error: Missing opcode\n", line_number);
		exit(EXIT_FAILURE);
	}

	if (strcmp(opcode, "push") == 0)
	{
		if (!operand || !is_numeric(operand))
		{
			fprintf(stderr, "L%u: Error: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
		int value = atoi(operand);

		push(stack, value);
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stack, line_number);
	}
    else if (strcmp(opcode, "nop") == 0)
    {
        nop(stack, line_number);
    }
	else
	{
		fprintf(stderr, "L%u: Error: Unknown instruction %s\n", line_number, opcode);
		exit(EXIT_FAILURE);
	}
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
