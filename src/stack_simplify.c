/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_simplify.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:43:25 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 12:43:30 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// lst_to_int_arr will convert our list to an array of int.
// To make simplify_stack shorter.
int	*lst_to_int_arr(t_stack *stack, int size)
{
	int		i;
	int		*tab;
	t_stack	*tmp;

	i = 0;
	tmp = stack;
	tab = (int *)malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (tmp)
	{
		tab[i] = tmp->content;
		tmp = tmp->next;
		i++;
	}
	return (tab);
}

// Simplify_stack will simplify the stack.
// Makes : -42 20 19 2 -10 -1
// To    : 0 5 4 3 1 2
void	simplify_stack(t_stack *stack, int size)
{
	int		i;
	int		j;
	int		*tab;

	i = 0;
	j = 0;
	tab = lst_to_int_arr(stack, size);
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (tab[i] > tab[j])
				stack->index++;
			j++;
		}
		stack = stack->next;
		i++;
	}
	free(tab);
}
