/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:27:23 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/01 19:40:18 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Check if *str only contains digit, negative digits and spaces.
int	is_str_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && ft_isdigit(str[i + 1]))
			i++;
		else if (ft_isdigit(str[i]) == 1)
			i++;
		else if (str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (1);
}

// Same as is_str_numeric but for multiple arguments instead of one *str
int	is_arg_numeric(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (is_str_numeric(av[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}

// Convert *str to *long int array.
// Use ft_split to split *str into **str array.
// Then convert each **str to int and put it in *long int array.
long int	*numeric_str_to_int_array(char *str)
{
	char		**str_array;
	long int	*num_array;
	long int	i;

	i = 0;
	str_array = ft_split(str, ' ');
	num_array = malloc(sizeof(long int) * count_digits_in_str(str));
	if (!num_array)
		return (NULL);
	while (str_array[i])
	{
		num_array[i] = ft_atoi(str_array[i]);
		i++;
	}
	i = 0;
	while (str_array[i])
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
	return (num_array);
}

// convert **av into a *long int array.
long int	*av_to_int_array(int ac, char **av)
{
	long int	*num_array;
	int			i;

	i = 1;
	num_array = malloc(sizeof(long int) * (ac - 1));
	if (!num_array)
		return (NULL);
	while (i < ac)
	{
		num_array[i - 1] = ft_atoi(av[i]);
		i++;
	}
	return (num_array);
}

// Returns 1 if arguments are valid, 0 if not.
// Calls all the functions to check if arguments are valid.
int	check_args(int ac, char **av)
{
	long int	*num_array;
	long int	len;
	int			is_all_good;

	len = arraylen(ac, av);
	if (ac == 2 && is_str_numeric(av[1]) == 1)
	{
		num_array = numeric_str_to_int_array(av[1]);
		is_all_good = 1;
	}
	else if (ac > 2 && is_arg_numeric(ac, av) == 1)
	{
		num_array = av_to_int_array(ac, av);
		is_all_good = 1;
	}
	if (is_all_good == 1)
	{
		if (found_duplicates(num_array, len) == 0)
		{
			if (found_intmax(num_array, len) == 0)
				return (free(num_array), 1);
		}
	}
	return (free(num_array), 0);
}
