/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:27:23 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/04 19:00:34 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Check if *str only contains digit, negative digits and spaces.
// Accepts ' ' and '-' and digits.
// Only accepts '-' if its followed by a digit AND not preceded by a digit.
int	is_str_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' && ft_isdigit(str[i + 1]) == 1
			&& ft_isdigit(str[i - 1]) == 0)
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

// Same as is_str_numeric but check each arguments instead of one *str
// Checks every arguments in **av. Calling is_str_numeric for each
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
// We have to free the whole str_array to avoid leaks.
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
		num_array[i] = ft_atol(str_array[i]);
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
// We use atol to be able to check if the number is bigger than MAX_INT later.
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
		num_array[i - 1] = ft_atol(av[i]);
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

	len = arraylen(ac, av);
	num_array = NULL;
	if (ac == 2 && is_str_numeric(av[1]) == 1)
		num_array = numeric_str_to_int_array(av[1]);
	else if (ac > 2 && is_arg_numeric(ac, av) == 1)
		num_array = av_to_int_array(ac, av);
	if (num_array != NULL)
	{
		if (found_duplicates(num_array, len) == 0)
		{
			if (found_intmax(num_array, len) == 0)
				return (free(num_array), 1);
		}
		free(num_array);
	}
	return (0);
}

// At line 123, I made the code shorter.
// The "more readable" version looked like this:
//
// ...
// if (is_all_good == 1)
// 	{
// 		if (found_duplicates(num_array, len) == 0)
// 		{
// 			if (found_intmax(num_array, len) == 0)
// 				return (free(num_array), 1);
// 		}
// 		free(num_array);
// 	}
// ...