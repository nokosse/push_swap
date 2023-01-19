/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:34:30 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/19 13:10:33 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// How does Radix sort work?
// 1. Determine the number of digits in the largest number. (42 = 2 digits)
// 2. For every digit (from right to left):
//  a. Regroup the elements of the array based on their digit value.
//  b. Reorganize the array based on groups created in step 2a.
// 3. Repeat steps 2a and 2b until all digits have been sorted.

// This is the structure of the linked list
// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }	t_list;

//This function sorts the stack_a if the size of the stack_a > 5 using radix sort
void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	(void)stack_a;
	(void)stack_b;
}