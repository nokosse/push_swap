/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:17:35 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/24 11:54:55 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// rr : ra et rb en même temps.
//
// 1 | 5        2 | 6
// 2 | 6   rr   3 | 7
// 3 | 7   -->  4 | 8
// 4 | 8        1 | 5
//---|---      ---|---
// A | B        A | B

void	sort_rr(t_list **stack_a, t_list **stack_b)
{
	sort_ra(stack_a);
	sort_rb(stack_b);
	ft_printf("rr\n");
}
