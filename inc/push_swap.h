/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:41:22 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/18 17:41:43 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>
# include <fcntl.h>
# include "../libft/inc/libft.h"
# include "../libft/inc/ft_printf.h"

// Arguments validity check
int	dupe_check_args(char **av);
int	dupe_check_str(char *str);
int	is_number(char *str);
int	is_array_numeric(char *str);
int	are_args_numeric(int ac, char **av);
int	check_args(int ac, char **av);
int	is_number_bigger_than_max_int(char **av);
int	is_number_bigger_than_max_int_str(char *str);

// Put args in list

#endif