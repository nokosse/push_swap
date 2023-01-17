/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 17:56:32 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/18 00:26:54 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/push_swap.h"
#include "libft/inc/libft.h"
#include "libft/inc/ft_printf.h"

int main (int ac, char **av)
{
	if (ac == 1)
		return (0);
	if (check_args(ac, av) == 1)
	{
		ft_printf("Arguments are valid !");
	}
	else
	{
		ft_printf("Error");
	}
}