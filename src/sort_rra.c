/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:44:12 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 14:30:22 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// rra (reverse rotate a) : Décale d’une position vers le bas tous les 
// élements de la pile a. Le dernier élément devient le premier.
//
// 1 |          4 |  
// 2 |     rra  1 |  
// 3 |     -->  2 |  
// 4 |          3 |  
//---|---      ---|---
// A | B        A | B

void	rra(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*tmp2;

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
	ft_printf("rra\n");
}
