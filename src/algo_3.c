/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:09:49 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/24 11:47:42 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Split the case 2 of algo_3() into a function for norms (Line too long)
int	algo_3_case_2(t_list *stack_a, t_list *stack_b)
{
	(void)(stack_b);
	if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->content) > *(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->next->content) >
		*(int *)(stack_a->next->next->content))
		return (1);
	return (0);
}

// Split the case 3 of algo_3() into a function for norms (Line too long)
int	algo_3_case_3(t_list *stack_a, t_list *stack_b)
{
	(void)(stack_b);
	if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->next->content) <
		*(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->content) > *(int *)(stack_a->next->next->content))
		return (1);
	return (0);
}

// Split the case 4 of algo_3() into a function for norms (Line too long)
int	algo_3_case_4(t_list *stack_a, t_list *stack_b)
{
	(void)(stack_b);
	if (*(int *)(stack_a->content) < *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->next->content) >
		*(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->content) < *(int *)(stack_a->next->next->content))
		return (1);
	return (0);
}

// Split the case 5 of algo_3() into a function for norms (Line too long)
int	algo_3_case_5(t_list *stack_a, t_list *stack_b)
{
	(void)(stack_b);
	if (*(int *)(stack_a->content) <
		*(int *)(stack_a->next->content) &&
		*(int *)(stack_a->next->content) >
		*(int *)(stack_a->next->next->content) &&
		*(int *)(stack_a->content) >
		*(int *)(stack_a->next->next->content))
		return (1);
	return (0);
}

// This function will sort the stack_a if it has 3 elements.
// It must not have more than 3 sorting operations.
void	algo_3(t_list *stack_a, t_list *stack_b)
{
	if (*(int *)(stack_a->content) > *(int *)(stack_a->next->content) &&
		*(int *)(stack_a->content) < *(int *)(stack_a->next->next->content))
		sort_sa(&stack_a, &stack_b);
	else if (algo_3_case_2(stack_a, stack_b) == 1)
	{
		sort_sa(&stack_a, &stack_b);
		sort_rra(&stack_a, &stack_b);
	}
	else if (algo_3_case_3(stack_a, stack_b) == 1)
		sort_ra(&stack_a, &stack_b);
	else if (algo_3_case_4(stack_a, stack_b) == 1)
	{
		sort_sa(&stack_a, &stack_b);
		sort_ra(&stack_a, &stack_b);
	}
	else if (algo_3_case_5(stack_a, stack_b) == 1)
		sort_rra(&stack_a, &stack_b);
}
