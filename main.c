#include "monty.h"

/**
 * main - Entry point of the Monty interpreter.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, EXIT_FAILURE on failure.
 */
int main(int argc, char *argv[])
{
	size_t line_size = 0;
	ssize_t line_length = 1;
	global_info_t global_info = {NULL, NULL, NULL, 0};

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	global_info.monty_file = fopen(argv[1], "r");
	if (!global_info.monty_file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (line_length > 0)
	{
		global_info.current_line = NULL;
		line_length = getline(&global_info.current_line, &line_size,
			global_info.monty_file);
		global_info.line_number++;
		if (line_length > 0)
		{
			process_monty_instruction(global_info.current_line, &global_info.stack_head,
				global_info.line_number);
		}
		free(global_info.current_line);
	}

	free_stack(global_info.stack_head);
	fclose(global_info.monty_file);
	return (0);
}
