#include "monty.h"
/**
 * m_add - A function that adds the head two elements of the stack.
 * @h: stack head.
 * @line_number: line number of stacks.
 * void function: adds the head two elements of the stack.
*/
void m_add(stack_t **h, unsigned int line_number);
{
	stack_t *head;
	int stack_len = 0, auxilary;

	head = *h;
	while (head)
	{
		head = head->next;
		stack_len++;
	}
	if (stack_len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	head = *h;
	auxilary = head->n + head->next->n;
	head->next->n = auxilary;
	*h = head->next;
	free(head);
}
