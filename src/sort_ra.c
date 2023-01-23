/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:16:53 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 15:36:59 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// ra : Décale d'1 position vers le haut tous les élements de la pile a.
// Le premier élément devient le dernier.
//
// 1 |          2 |
// 2 |     ra   3 |
// 3 |     -->  4 |
// 4 |          1 |
//---|---      ---|---
// A | B        A | B

void	sort_ra(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	(void)stack_b;
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
	ft_printf("ra\n");
}
