/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_hub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:00:26 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 15:06:37 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Function sorting_hub is called only if stack_a is not sorted.
// No need to check if stack_a is sorted or not.
//
// This function will call the sorting algorithm depending on the number of
// elements in stack_a.
void	sorting_hub(t_list *stack_a, t_list *stack_b, int params)
{
	if (params == 2)
		algo_2(stack_a);
	else if (params == 3)
		algo_3(stack_a, stack_b);
	else if (params == 4)
		algo_4(stack_a, stack_b);
	else if (params == 5)
		algo_5(stack_a, stack_b);
}