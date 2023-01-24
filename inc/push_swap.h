/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:41:22 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/24 12:17:14 by kvisouth         ###   ########.fr       */
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

//Extra
void	ft_print_lst(t_list *lst);

// Arguments validity check
int		dupe_check_args(char **av);
int		dupe_check_str(char *str);
int		is_number(char *str);
int		is_array_numeric(char *str);
int		are_args_numeric(int ac, char **av);
int		check_args(int ac, char **av);
int		is_number_bigger_than_max_int(char **av);
int		is_number_bigger_than_max_int_str(char *str);

// Put args in list
int		ft_intlen(int *numbers);
int		*str_to_int_array(char *str);
int		*av_to_int_array(int ac, char **av);
void	stack_init(int *numbers, t_list **stack_a);

// Sorting instructions
void	sort_pa(t_list **stack_a, t_list **stack_b);
void	sort_pb(t_list **stack_a, t_list **stack_b);
void	sort_ra(t_list **stack_a);
void	sort_rb(t_list **stack_b);
void	sort_rr(t_list **stack_a, t_list **stack_b);
void	sort_sa(t_list **stack_a);
void	sort_sb(t_list **stack_b);
void	sort_ss(t_list **stack_a, t_list **stack_b);
void	sort_rra(t_list **stack_a);

// Sorting algorithms & verification
int		is_stack_a_sorted(t_list *stack_a, t_list *stack_b);
int     is_stack_a_sorted_no_b(t_list *stack_a);
void	algo_2_a(t_list *stack_a);
void	algo_2_b(t_list *stack_b);
void	algo_3(t_list *stack_a, t_list *stack_b);
void	algo_5(t_list *stack_a, t_list *stack_b);

#endif