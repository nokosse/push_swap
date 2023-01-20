/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:15:30 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/20 13:09:47 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// ss : sa et sb en même temps.
//
// 1 | 5        2 | 6
// 2 | 6   ss   1 | 5
// 3 | 7   -->  3 | 7
// 4 | 8        4 | 8
//---|---      ---|---
// A | B        A | B

void	sort_ss(t_list **stack_a, t_list **stack_b)
{
	sort_sa(stack_a, stack_b);
	sort_sb(stack_a, stack_b);
}
