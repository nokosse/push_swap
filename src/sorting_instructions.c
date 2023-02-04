/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 12:35:11 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/04 12:36:19 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Takes the first element of stack_b and put it at the first position of
// stack_a. It becomes the new first element of stack_a.
//   |            |
//   |     pa   1 |
// 3 | 1   -->  3 |
// 4 | 2        4 | 2
//---|---      ---|---
// A | B        A | B
void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	write(1, "pa\n", 3);
}

// Takes the first element of stack_a and put it at the first position of
// stack_b. It becomes the new first element of stack_b.
//
//   |            |
//   |     pb     | 3
// 3 | 1   -->    | 1
// 4 | 2        4 | 2
//---|---      ---|---
// A | B        A | B
void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (*stack_a)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		tmp->next = *stack_b;
		*stack_b = tmp;
	}
	write(1, "pb\n", 3);
}

// Takes the first element of stack_a and put it at the end of the stack.
// The first element becomes the last one.
// All the other elements are shifted up by one.
//
// 1 |          2 |
// 2 |     ra   3 |
// 3 |     -->  4 |
// 4 |          1 |
//---|---      ---|---
// A | B        A | B
void	ra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		tmp2 = *stack_a;
		while (tmp2->next)
			tmp2 = tmp2->next;
		*stack_a = (*stack_a)->next;
		tmp2->next = tmp;
		tmp->next = NULL;
	}
	write(1, "ra\n", 3);
}

// Takes the last element of stack_a and put it at the first position of
// stack_a. It becomes the new first element of stack_a.
// All other elements are shifted down by one.
//
// 1 |          4 |  
// 2 |     rra  1 |  
// 3 |     -->  2 |  
// 4 |          3 |  
//---|---      ---|---
// A | B        A | B
void	rra(t_stack **stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = *stack_a;
		while (tmp->next->next)
			tmp = tmp->next;
		tmp2 = tmp->next;
		tmp->next = NULL;
		tmp2->next = *stack_a;
		*stack_a = tmp2;
	}
	write(1, "rra\n", 4);
}

// Swap the first 2 elements at the top of stack_a.
//
// 1 |          2 |
// 2 |     sa   1 |
// 3 |     -->  3 |
// 4 |          4 |
//---|---      ---|---
// A | B        A | B
void	sa(t_stack **stack_a)
{
	t_stack	*tmp;

	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	write(1, "sa\n", 3);
}
