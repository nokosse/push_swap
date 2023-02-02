/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:33:47 by kvisouth          #+#    #+#             */
/*   Updated: 2023/02/02 16:40:32 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// Count the number of digits in *str.
int	count_digits_in_str(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			i++;
		while (str[i] == ' ' || str[i] == '-')
			i++;
		if (str[i])
			count++;
		while (ft_isdigit(str[i]) == 1)
			i++;
	}
	return (count);
}

// Check if long int *array contains duplicates.
int	found_duplicates(long int *array, long int size)
{
	long int	i;
	long int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (array[i] == array[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

// Check if *int array contains a number bigger than INT_MAX.
// Also check if *int array contains a number smaller than INT_MIN.
int	found_intmax(long int *array, long int size)
{
	long int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] > INT_MAX)
			return (1);
		else if (array[i] < INT_MIN)
			return (1);
		i++;
	}
	return (0);
}

// Returns the length of the *int array.
long int	arraylen(int ac, char **av)
{
	long int	len;

	if (ac == 2)
		len = count_digits_in_str(av[1]);
	else
		len = ac - 1;
	return (len);
}
