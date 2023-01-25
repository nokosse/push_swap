/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_4_5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:13:45 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 19:36:06 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Function algo_5 is called only if stack_a has 5 elements.
// 1. Do 'pb' 2 times so stack_a has 3 elements.
// 2. Sort stack_a with algo_3(&a) if its not sorted.
// To finish the sorting process, we just need to push the last two or less
// elements on stack B, finding the correct position on the stack_a before
// running the push operation.
// The operations have to be used like : pb(&a, &b), sa(&a) etc...

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

void	algo_5(t_list **a, t_list **b)
{
	
}