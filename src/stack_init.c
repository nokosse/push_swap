/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 17:40:03 by kvisouth          #+#    #+#             */
/*   Updated: 2023/01/18 19:30:42 by kvisouth         ###   ########.fr       */
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

//Function that convert an char **str of numbers to an array of int
int	*av_to_int_array(char **av)
{
	int	*numbers;
	int	i;
	int	j;

	i = 1;
	j = 0;
	numbers = (int *)malloc(sizeof(int) * (ft_strlen(av[1]) + 1));
	while (av[i])
	{
		numbers[j] = ft_atoi(av[i]);
		i++;
		j++;
	}
	return (numbers);
}

//Function that takes a int *numbers and put all the numbers in a t_list
// Prototype of the t_list struct :
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
// t_list	*ft_lstnew(void *content);
// t_list	*ft_lstlast(t_list *lst);
// void	ft_lstadd_front(t_list **lst, t_list *new);
// int		ft_lstsize(t_list *lst);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstdelone(t_list *lst, void (*del)(void*));
// void	ft_lstclear(t_list **lst, void (*del)(void*));
// void	ft_lstiter(t_list *lst, void (*f)(void *));
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
