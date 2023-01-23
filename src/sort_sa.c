/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:13:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 15:37:02 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// sa (swap a) : Intervertit les 2 premiers éléments au sommet de la pile a.
// Ne fait rien s’il n’y en a qu’un ou aucun.
//
// 1 |          2 |
// 2 |     sa   1 |
// 3 |     -->  3 |
// 4 |          4 |
//---|---      ---|---
// A | B        A | B

void	sort_sa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	(void)stack_b;
	if (*stack_a && (*stack_a)->next)
	{
		tmp = (*stack_a)->next;
		(*stack_a)->next = tmp->next;
		tmp->next = *stack_a;
		*stack_a = tmp;
	}
	ft_printf("sa\n");
}
