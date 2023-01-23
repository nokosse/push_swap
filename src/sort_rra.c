/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:44:12 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 16:52:05 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// rra (reverse rotate a) : Décale d’une position vers le bas tous les 
// élements de la pile a. Le dernier élément devient le premier.
//
// 1 |          4 |  
// 2 |     rr   1 |  
// 3 |     -->  2 |  
// 4 |          3 |  
//---|---      ---|---
// A | B        A | B

void	sort_rra(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	(void)stack_b;
	if (stack_a && stack_a->next)
	{
		tmp = stack_a;
		while (tmp->next)
		{
			tmp2 = tmp;
			tmp = tmp->next;
		}
		tmp2->next = NULL;
		tmp->next = stack_a;
		stack_a = tmp;
	}
	ft_printf("rra\n");
}