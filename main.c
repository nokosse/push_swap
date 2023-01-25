/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 15:01:28 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// Function ft_print_lst : print the content of stack_a.
void	ft_print_lst(t_list *stack_a)
{
	while (stack_a)
	{
		ft_printf("%d\n", *(int *)(stack_a->content));
		stack_a = stack_a->next;
	}
}

int	main(int ac, char **av)
{
	int	*numbers;
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	else if (check_args(ac, av) == 0)
		return (ft_printf("Error\n"), exit(1), 0);
	if (ac == 2)
		numbers = str_to_int_array(av[1]);
	else if (ac > 2)
		numbers = av_to_int_array(ac, av);
	stack_init(numbers, &stack_a);
	if (is_stack_a_sorted(stack_a, stack_b) == 0)
		sorting_hub(&stack_a, &stack_b, ac - 1);

	// Test purpose
	if (is_stack_a_sorted(stack_a, stack_b) == 1)
		ft_printf("\nOK\n");
	else
		ft_printf("\nKO\n");
	ft_printf("stack_a:\n");
	ft_print_lst(stack_a);
}