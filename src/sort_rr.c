/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:28:55 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 15:39:20 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Do both ra and rb at the same time.
//
// 1 | 5        2 | 6
// 2 | 6   rr   3 | 7
// 3 | 7   -->  4 | 8
// 4 | 8        1 | 5
//---|---      ---|---
// A | B        A | B

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a);
	rb(stack_b);
	ft_printf("rr\n");
}
