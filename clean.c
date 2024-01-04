#include "monty.h"

/**
 * cleanup - Clean up resources and free memory.
 * @info: A pointer to the global_info_t structure.
 *
 * Description: This function is responsible for cleaning up resources
 * and freeing memory used by the Monty interpreter. It frees the current_line
 * if it's not NULL, closes the Monty file if it's open, and calls free_stack
 * to free the memory allocated for the stack.
 */
void cleanup(global_info_t *info)
{
	if (info->current_line)
	{
		free(info->current_line);
	}
	if (info->monty_file)
	{
		fclose(info->monty_file);
	}
	free_stack(info->stack_head);
}
