/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:15:48 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 15:35:46 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// pa (push a) : Prend le premier élément au sommet de b et le met sur a.
// Ne fait rien si b est vide.
//
//   |            |
//   |     pa   1 |
// 3 | 1   -->  3 |
// 4 | 2        4 | 2
//---|---      ---|---
// A | B        A | B

// This function reproduce the pa instruction.
// Takes the first element of stack_b and put it at the first position of
// stack_a. It becomes the new first element of stack_a.
void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (*stack_b)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("pa\n");
}
