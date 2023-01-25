/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:13:39 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 15:35:49 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Function algo_2 is called only if stack_a has 2 elements.
// If elem1 > elem2, swap them.
// Else, it means it's already sorted.
void	algo_2(t_list *a)
{
	if (a->content > a->next->content)
		sa(&a);
}

// Function algo_3 is called only if stack_a has 3 elements.
// There is 5 possible cases:
// 1. elem2 < elem1 < elem3 --> sa
// 2. elem3 < elem2 < elem1 --> sa + rra
// 3. elem2 < elem3 < elem1 --> ra
// 4. elem1 < elem3 < elem2 --> sa + ra
// 5. elem3 < elem1 < elem2 --> rra
void	algo_3(t_list *a)
{
	int	*elm1;
	int	*elm2;
	int	*elm3;

	elm1 = a->content;
	elm2 = a->next->content;
	elm3 = a->next->next->content;
	if (*elm2 < *elm1 && *elm1 < *elm3)
		sa(&a);
	else if (*elm3 < *elm2 && *elm2 < *elm1)
	{
		sa(&a);
		rra(&a);
	}
	else if (*elm2 < *elm3 && *elm3 < *elm1)
		ra(&a);
	else if (*elm1 < *elm3 && *elm3 < *elm2)
	{
		sa(&a);
		ra(&a);
	}
	else if (*elm3 < *elm1 && *elm1 < *elm2)
		rra(&a);
}
