/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 19:12:39 by kvisouth         ###   ########.fr       */
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

int	*nb_init(int ac, char **av)
{
	int	*numbers;

	if (ac == 2)
		numbers = str_to_int_array(av[1]);
	else if (ac > 2)
		numbers = av_to_int_array(ac, av);
	return (numbers);
}

// Main function of push_swap.
// 1. Check if arguments are valid.
// 2. Initialize array of integers.
// 3. Initialize stack_a with the array of integers.
// 4. Check if stack_a is sorted.
// 5. If stack_a is not sorted, call sorting_hub to sort it.

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
	stack_init(nb_init(ac, av), &stack_a);
	if (is_stack_a_sorted(stack_a, stack_b) == 0)
		sorting_hub(&stack_a, &stack_b, ac - 1);

	// Test purpose
	ft_printf("\nstack_a : ");
	ft_print_lst(stack_a);
}

//TODO : Edit all the code to use the new structure t_stack
//TODO : Sort 4 and 5
//TODO : Edit check_args to accept negative numbers