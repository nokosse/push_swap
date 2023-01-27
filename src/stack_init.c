/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:40:03 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:23:41 by kvisouth         ###   ########.fr       */
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

// Function init_stack will create a *t_stack struct from *int array.
// typedef struct s_stack
// {
// 	int				*content;
// 	int				index;
// 	struct s_stack	*next;
// }	t_stack;
//
// each content in t_stack is a int in *int array.
// Index is null in init_stack and will be altered in sorts algorithms.
// next is the next t_stack in the stack.
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
