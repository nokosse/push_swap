/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:35:46 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/24 11:58:20 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// This function will sort the stack_a if it has 2 elements.
// It uses sort_sa() if the first element is bigger than the second one.
void	algo_2_a(t_list *stack_a)
{
	if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content))
		sort_sa(&stack_a);
}

// Same but for stack_b.
void	algo_2_b(t_list *stack_b)
{
	if (*(int *)(stack_b->content) < *(int *)(stack_b->next->content))
		sort_sb(&stack_b);
}
