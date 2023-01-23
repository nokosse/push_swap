/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:35:46 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 18:35:54 by kvisouth         ###   ########.fr       */
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
