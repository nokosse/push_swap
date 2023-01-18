/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/18 20:02:25 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"

void    ft_print_lst(t_list *lst)
{
	int	i;

	i = 1;
	while (lst)
	{
		ft_printf("elem list %d : %d\n", i++,*(int *)(lst->content));
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
		numbers = av_to_int_array(ac, av);

	//print numbers
	// int i = 0;
	// while (numbers[i])
	// 	ft_printf("numbers = %d\n", numbers[i++]);
	
	stack_init(numbers, &stack_a);
	ft_print_lst(stack_a);
}
