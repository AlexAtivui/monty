#include "monty.h"

/**
 * f_stack - sets the stack mode.
 * @head: double pointer to the stack (head).
 * @counter: the line number in the file.
 *
 * This function sets the stack mode,
 * indicating that subsequent operations
 * will treat the stack as a stack (LIFO - Last In, First Out).
 */
void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
