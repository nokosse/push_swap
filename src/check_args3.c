/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:42:33 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/07 15:49:28 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	found_ullmax_ac2(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '-')
			i++;
		while (ft_isdigit(str[i]) == 1)
		{
			i++;
			j++;
		}
		if (j > 10)
			return (1);
		j = 0;
	}
	return (0);
}

int	found_ullmax_acs(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 1)
				j++;
			else
				return (0);
		}
		if (j > 10)
			return (1);
		i++;
	}
	return (0);
}

// Check if unsigned long long int number is bigger than ULLONG_MAX.
// I threw up so what It will do : it will check if there is a number
// bigger than 10 digits in the array.
int	found_ullmax(int ac, char **av)
{
	if (ac == 2 && is_str_numeric(av[1]) == 1)
	{
		if (found_ullmax_ac2(av[1]) == 1)
			return (1);
	}
	else if (ac > 2 && is_arg_numeric(ac, av) == 1)
	{
		if (found_ullmax_acs(ac, av) == 1)
			return (1);
	}
	return (0);
}
