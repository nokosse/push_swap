/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:40:03 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:45:10 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Function init_array will create a *int array from *char array or **args.
long int	*init_array(int ac, char **av)
{
	long int	*array;

	if (ac == 2)
		array = numeric_str_to_int_array(av[1]);
	else
		array = av_to_int_array(ac, av);
	return (array);
}

// Function init_stack will create a stack from a *int array.
// Each element of the array will be added to the stack.
// The array will be freed after.
void	init_stack(long int *array, t_stack **stack, int ac, char **av)
{
	int	i;
	int	len;

	i = 0;
	len = arraylen(ac, av);
	while (i < len)
	{
		ft_stkadd_back(stack, ft_stknew(*(int *)&array[i]));
		i++;
	}
	free(array);
}
