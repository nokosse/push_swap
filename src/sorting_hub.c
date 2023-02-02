/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_hub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:00:26 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/02 16:33:36 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Function sorting_hub is called only if stack_a is not sorted.
//
// This function will call the sorting algorithm depending on the number of
// elements in stack_a.
void	sorting_hub(t_stack **a, t_stack **b, int size)
{
	if (size == 2)
		algo_2(a);
	else if (size == 3)
		algo_3(a);
	else if (size == 4)
		algo_4(a, b);
	else if (size == 5)
		algo_5(a, b);
	else if (size > 5 && size <= 500)
	{
		simplify_stack(*a, size);
		algo_radix(a, b, size);
	}
}
