/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:05:40 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 19:34:49 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// This function will return the max number of bits of the biggest number in
// stack_a.
// If the the list is of size 6 to 7, the max number of bits will be 3.
// If the the list is of size 8 to 15, the max number of bits will be 4.
// If it's 16 to 31, the max number of bits will be 5.
// If it's 32 to 63, the max number of bits will be 6.
// If it's 64 to 127, the max number of bits will be 7.
// If it's 128 to 255, the max number of bits will be 8.
// If it's 256 to 511, the max number of bits will be 9.
int	get_max_bits(int size)
{
	int	max_bits;

	if (size <= 7)
		max_bits = 3;
	else if (size <= 15)
		max_bits = 4;
	else if (size <= 31)
		max_bits = 5;
	else if (size <= 63)
		max_bits = 6;
	else if (size <= 127)
		max_bits = 7;
	else if (size <= 255)
		max_bits = 8;
	else if (size <= 511)
		max_bits = 9;
	return (max_bits);
}

// Radix sort algorithm
// 
void	algo_100(t_stack **a, t_stack **b, int size)
{
	t_stack	*tmp;
	int		max_bits;
	int		i;
	int		j;

	max_bits = get_max_bits(size);
	i = 0;
	j = 0;
	while (i < max_bits)
	{
		tmp = *a;
		while (j < size)
		{
			if (((tmp->index >> i) & 1) == 1)
				ra(&*a);
			else
				pb(&*a, &*b);
			tmp = *a;
			j++;
		}
		while (*b)
			pa(&*a, &*b);
		j = 0;
		i++;
	}
}
