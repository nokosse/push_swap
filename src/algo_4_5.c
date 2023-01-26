/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:13:45 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/26 13:52:58 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// How it sorting a list of 4 or 5 elements works ?
// 1. Find the smallest element in stack_a with find_smallest function.
// 2. Use ra or rra to put the smallest element on top of stack_a.
// 3. Push it to stack_b with pb.
// 4. Repeat this if you have 5 elements.
// 5. Sort stack_a with algo_3 if not sorted.
// 6. Just do pa to put the elements back to stack_a
// 10 operations should be the maximum to sort a list of 5 elements. (2 5 1 4 3)

int	find_smallest(t_list *a)
{
	int	smallest;

	smallest = *(int *)a->content;
	while (a != NULL)
	{
		if (*(int *)a->content < smallest)
			smallest = *(int *)a->content;
		a = a->next;
	}
	return (smallest);
}

void	algo_4(t_list **a, t_list **b)
{
	int	smallest;

	smallest = find_smallest(*a);
	if (*(int *)(*a)->next->next->next->content == smallest)
		rra(&*a);
	while (*(int *)(*a)->content != smallest)
		ra(&*a);
	pb(&*a, &*b);
	if (is_stack_a_sorted_no_b(*a) == 0)
		algo_3(a);
	pa(&*a, &*b);
}

void	algo_5(t_list **a, t_list **b)
{
	int	smallest;

	smallest = find_smallest(*a);
	if (*(int *)(*a)->next->next->next->next->content == smallest)
		rra(&*a);
	else if (*(int *)(*a)->next->next->next->content == smallest)
	{
		rra(&*a);
		rra(&*a);
	}
	while (*(int *)(*a)->content != smallest)
		ra(&*a);
	pb(&*a, &*b);
	smallest = find_smallest(*a);
	if (*(int *)(*a)->next->next->next->content == smallest)
		rra(&*a);
	while (*(int *)(*a)->content != smallest)
		ra(&*a);
	pb(&*a, &*b);
	if (is_stack_a_sorted_no_b(*a) == 0)
		algo_3(a);
	pa(&*a, &*b);
	pa(&*a, &*b);
}
