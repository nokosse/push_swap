/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:29:13 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/30 18:48:44 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Reproduces ft_lstadd_back from libft but with the new structure :
// typedef struct s_stack
// {
// 	int				content;
// 	struct s_stack	*next;
// }	t_stack;

void	ft_stkadd_back(t_stack **stack, t_stack *new)
{
	t_stack	*current;

	if (!*stack)
	{
		*stack = new;
		return ;
	}
	current = *stack;
	while (current->next)
		current = current->next;
	current->next = new;
}

// Reproduces ft_lstnew from libft but with the new structure :
t_stack	*ft_stknew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->index = 0;
	new->next = NULL;
	return (new);
}

// Reproduces ft_lstlast from libft but with the new structure :
// It frees all the elements of the stack: content and index
void	ft_stkclear(t_stack **stack)
{
	t_stack	*current;
	t_stack	*next;

	current = *stack;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*stack = NULL;
}

// Can add lst functions if needed.	