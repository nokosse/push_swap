/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/04 12:07:05 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// 1. Check if the arguments are valid.
// 2. Initialize the stack_a with the arguments.
// 3. Check if the stack_a is already sorted.
// 4. If not, sort the stack_a.
// 5. Free the stack_a.
int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	if (check_args(ac, av) == 0)
	{
		write(STDERR_FILENO, "Error\n", 6);
		exit(1);
	}
	init_stack(init_array(ac, av), &stack_a, ac, av);
	if (is_stack_a_sorted(stack_a, stack_b) == 0)
		sorting_hub(&stack_a, &stack_b, (int)arraylen(ac, av));
	ft_stkclear(&stack_a);
	return (0);
}

// We write on STDERR_FILENO to write on the standard error output.
// It's same as write(2, "Error\n", 6); but it's more readable.