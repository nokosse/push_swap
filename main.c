/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/23 20:25:02 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

// Function that print the list content from the first element to the last.
// It has to reset the list to the first element before printing because
// the list is modified during the sorting process.
void    ft_print_lst(t_list *lst)
{
	t_list  *temp;

	temp = lst;
	while (temp != NULL)
	{
		ft_printf("%d ", *(int *)(temp->content));
		temp = temp->next;
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
		else if (ft_lstsize(stack_a) == 5)
		//TODO : Fix for 2, 4 and 5
		else
			bogo_sort(&stack_a, &stack_b);
	}
	if (is_stack_a_sorted(stack_a, stack_b) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	// ft_printf("\n");
	// ft_print_lst(stack_a);
}