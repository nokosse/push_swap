/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:34:48 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/19 12:41:03 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//This function checks if the stack is sorted in ascending order
int	is_stack_a_sorted(t_list *stack)
{
	int	*current;
	int	*next;

	current = stack->content;
	while (stack->next)
	{
		next = stack->next->content;
		if (*current > *next)
			return (0);
		current = next;
		stack = stack->next;
	}
	return (1);
}