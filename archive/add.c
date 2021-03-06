#include "monty.h"

/**
 * add - adds the top two elemets of the stack
 * @stack: double pointer to head of stack
 * @line_number: line to be executed
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	int n = 0;

	if (var.stack_len < 2)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	n += (*stack)->n;
	pop(stack, line_number);
	(*stack)->n +=n;
}
