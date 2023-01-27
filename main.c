/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/27 15:42:26 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// Function ft_print_stack print the stack in parameter.
void	ft_print_stack(t_stack *stack)
{
	while (stack)
	{
		printf("%d\n", stack->content);
		stack = stack->next;
	}
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	else if (check_args(ac, av) == 0)
		return (ft_printf("Error\n"), exit(1), 0);
	printf("OK\n");
	init_stack(init_array(ac, av), &stack_a, ac, av);
	if (is_stack_a_sorted(stack_a, stack_b) == 0)
		sorting_hub(&stack_a, &stack_b, ac - 1);
	ft_stkclear(&stack_a);
	(void)stack_a;
	(void)stack_b;
}

// Todo : algo_100 and algo_500