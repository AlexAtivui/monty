#include "monty.h"

/**
 * f_pchar - Prints the character at the top of the stack,
 * followed by a new line.
 * @head: Double pointer to the stack (head).
 * @counter: The line number in the file.
 *
 * This function prints the character
 * at the top of the stack as an ASCII character.
 * It checks for an empty stack and
 * if the value is out of the valid ASCII range.
 */
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *h;

	h = *head;

	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", h->n);
}
