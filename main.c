/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/18 19:38:26 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void    ft_print_lst(t_list *lst)
{
	while (lst)
	{
		ft_printf("Liste : %d\n", *(int *)(lst->content));
		lst = lst->next;
	}
}

int	main(int ac, char **av)
{
	int	*numbers;
	t_list	*stack_a;
	// t_list	*stack_b;

	stack_a = NULL;
	// stack_b = NULL;
	if (ac == 1)
		return (0);
	else if (check_args(ac, av) == 0)
		return (ft_printf("Error\n"), exit(1), 0);
	if (ac == 2)
		numbers = str_to_int_array(av[1]);
	else if (ac > 2)
		numbers = av_to_int_array(av);
	stack_init(numbers, &stack_a);	//Stack A is initialized with the numbers
	ft_print_lst(stack_a);
}
