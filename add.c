#include "monty.h"
/**
 * m_add - A function that adds the head two elements of the stack.
 * @h: stack head.
 * @line_number: line number of stacks.
 * void function: adds the head two elements of the stack.
*/
void m_add(stack_t **h, unsigned int line_number)
{
	stack_t *temporary;

	if (h == NULL || *h == NULL || ((*h)->next) == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack_t(*h);

		exit(EXIT_FAILURE);
	}

	temporary = *h;
	*h = (*h)->next;
	(*h)->n += temporary->n;
	(*h)->prev = NULL;
	free(temporary);
}
