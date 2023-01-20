/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/20 13:03:58 by kvisouth         ###   ########.fr       */
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
	// free(numbers);

	//print numbers
	// int i = 0;
	// while (numbers[i])
	// 	ft_printf("numbers = %d\n", numbers[i++]);
	
	stack_init(numbers, &stack_a);

	ft_printf("Avant tri\n");
	ft_printf("stack_a\n");
	ft_print_lst(stack_a);
	ft_printf("stack_b\n");
	ft_print_lst(stack_b);
	ft_printf("\n\n");

	sort_pb(&stack_a, &stack_b);
	sort_pb(&stack_a, &stack_b);
	sort_pb(&stack_a, &stack_b);
	sort_ss(&stack_a, &stack_b);

	ft_printf("Apres tri\n");
	ft_printf("stack_a\n");
	ft_print_lst(stack_a);
	ft_printf("stack_b\n");
	ft_print_lst(stack_b);
}
