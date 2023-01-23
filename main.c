/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 17:19:20 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// Function that prints the list of integers. Display \n at every elements.
// Also prints the size of the list using ft_lstsize().
void    ft_print_lst(t_list *lst)
{
	ft_printf("Size: %d\n", ft_lstsize(lst));
	while (lst != NULL)
	{
		ft_printf("%d\n", *(int *)(lst->content));
		lst = lst->next;
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
	{
		if (ft_lstsize(stack_a) == 2)
			sort_sa(&stack_a, &stack_b);
		else if (ft_lstsize(stack_a) == 3)
			algo_3(&*stack_a, &*stack_b);
		else
			bogo_sort(&stack_a, &stack_b);
	}
	// if (is_stack_a_sorted(stack_a, stack_b) == 1)
	// 	ft_printf("OK\n");
	// else
	// 	ft_printf("KO\n");
	ft_printf("\n");
	ft_print_lst(stack_a);
}
		// else if (ft_lstsize(stack_a) == 3)
		// 	algo_3(&stack_a, &stack_b);