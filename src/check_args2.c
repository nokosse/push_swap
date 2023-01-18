/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:33:47 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/18 17:29:09 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//Function that takes an array of numbers and checks if there are duplicates
int	dupe_check_args(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

//Function that takes a *str of numbers and checks if there are duplicates
int	dupe_check_str(char *str)
{
	int		i;
	int		j;
	char	**av;

	av = ft_split(str, ' ');
	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

//Function that checks if there is a number > intmax in the array of numbers
int	is_number_bigger_than_max_int(char **av)
{
	int	i;
	
	i = 0;
	while (av[i])
	{
		if (ft_atol(av[i]) > 2147483647)
			return (0);
		i++;
	}
	return (1);
}

//Function that check if there is a number > intmax in the *str of numbers
int	is_number_bigger_than_max_int_str(char *str)
{
	int		i;
	char	**av;

	av = ft_split(str, ' ');
	i = 0;
	while (av[i])
	{
		if (ft_atol(av[i]) > 2147483647)
			return (0);
		i++;
	}
	return (1);
}
