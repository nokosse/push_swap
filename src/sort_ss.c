/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:15:30 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:06:27 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Swap the first 2 elements at the top of both stack_a and stack_b.
//
// 1 | 5        2 | 6
// 2 | 6   ss   1 | 5
// 3 | 7   -->  3 | 7
// 4 | 8        4 | 8
//---|---      ---|---
// A | B        A | B

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a);
	sb(stack_b);
	ft_printf("ss\n");
}
