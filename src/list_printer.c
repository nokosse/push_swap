/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_printer.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:52:13 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/30 18:58:31 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Print the content and the index for each element
void	ft_print_both_lst(t_stack *stack)
{
	while (stack)
	{
		printf("index : %d | content : %d\n", stack->index, stack->content);
		stack = stack->next;
	}
}

// Print only the index for each element
void	ft_print_index(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->index);
		stack = stack->next;
	}
}

// Print only the content for each element
void	ft_print_content(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->content);
		stack = stack->next;
	}
}