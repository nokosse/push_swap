/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:27:23 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/26 17:04:51 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//Function that checks if the array is only numbers
int	is_number(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);zz
}

//Function that checks if the array contains only numbers and spaces
int	is_array_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0 && str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

//Function that checks if all the arguments are only numbers
int	are_args_numeric(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_number(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

//Checks if the arguments are valid. Will be used in main
int	check_args(int ac, char **av)
{
	if (ac == 2 && is_array_numeric(av[1]) == 1)
	{
		if (dupe_check_str(av[1]) == 1)
		{
			if (is_number_bigger_than_max_int_str(av[1]) == 1)
				return (1);
		}
	}
	else if (ac > 2 && are_args_numeric(ac, av) == 1)
	{
		if (dupe_check_args(av) == 1)
		{
			if (is_number_bigger_than_max_int(av) == 1)
				return (1);
		}
	}
	return (0);
}
