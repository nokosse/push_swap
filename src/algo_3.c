/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:09:49 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 18:15:07 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// This function will sort the stack_a if it has 2 elements.
// It uses sort_sa() if the first element is bigger than the second one.
void	algo_2(t_list *stack_a)
{
	if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content))
		sort_sa(&stack_a, NULL);
}

// This function will sort the stack_a if it has 3 elements.
// It must not have more than 3 sorting operations.
void	algo_3(t_list *stack_a, t_list *stack_b)
{
	if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->content) < *(int *)(stack_a->next->next->content))
		sort_sa(&stack_a, &stack_b);
	else if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->content) > *(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->next->content) > *(int *)(stack_a->next->next->content))
	{
		sort_sa(&stack_a, &stack_b);
		sort_rra(&stack_a, &stack_b);
	}
	else if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->next->content) < *(int *)(stack_a->next->next->content))
		sort_ra(&stack_a, &stack_b);
	else if (*(int *)(stack_a->content) < *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->next->content) > *(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->content) < *(int *)(stack_a->next->next->content))
	{
		sort_sa(&stack_a, &stack_b);
		sort_ra(&stack_a, &stack_b);
	}
	else if (*(int *)(stack_a->content) < *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->content) > *(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->next->content) > *(int *)(stack_a->next->next->content))
		sort_rra(&stack_a, &stack_b);
}
