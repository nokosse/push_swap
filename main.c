/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/26 20:33:46 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// Function ft_print_lst : print the content of stack_a.
void	ft_print_lst(t_list *stack_a)
{
	while (stack_a)
	{
		ft_printf("%d ", *(int *)(stack_a->content));
		stack_a = stack_a->next;
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	else if (check_args(ac, av) == 0)
		return (ft_printf("Error\n"), exit(1), 0);
	printf("OK\n");
	// stack_init(nb_init(ac, av), &stack_a);
	// if (is_stack_a_sorted(stack_a, stack_b) == 0)
	// 	sorting_hub(&stack_a, &stack_b, ac - 1);
	// return (0);
	(void)stack_a;
	(void)stack_b;
}

//TODO : Edit all the code to use the new structure t_stack instead of t_list