/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:40:03 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/25 14:03:25 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//Function that imitates ft_strlen but for int *numbers
int	ft_intlen(int *numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

//Function that convert a *str of numbers to an array of int
int	*str_to_int_array(char *str)
{
	int	*numbers;
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	numbers = (int *)malloc(sizeof(int) * ft_strlen(str));
	while (str[i])
	{
		if (str[i] == ' ')
		{
			numbers[j] = ft_atoi(&str[k]);
			j++;
			k = i + 1;
		}
		i++;
	}
	numbers[j] = ft_atoi(&str[k]);
	return (numbers);
}

//Function that takes a **argv of numbers and convert it to an array of int
int	*av_to_int_array(int ac, char **av)
{
	int	*numbers;
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	numbers = (int *)malloc(sizeof(int) * ac);
	while (i < ac)
	{
		if (av[i][0] == ' ')
		{
			numbers[j] = ft_atoi(&av[i][k]);
			j++;
			k = 0;
		}
		else
		{
			numbers[j] = ft_atoi(&av[i][k]);
			j++;
		}
		i++;
	}
	return (numbers);
}

//Function that takes a int array and put all the numbers in a t_list
//It's appending the numbers to the end of the list from the beginning.
void	stack_init(int *numbers, t_list **stack_a)
{
	int	i;
	int	size;

	i = 0;
	size = ft_intlen(numbers);
	while (i < size)
	{
		ft_lstadd_back(stack_a, ft_lstnew(&numbers[i]));
		i++;
	}
}
