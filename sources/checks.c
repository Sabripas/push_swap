/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:52:23 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 15:21:41 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arg_2(int ac, char **av)
{
	int	i;
	int	j;
	int	*a;

	a = ft_calloc(ac, sizeof(int));
	i = 1;
	j = 0;
	while (av[i])
	{
		if (ft_strchr(a, ft_atoi(av[i])) == 1)
		{
			free(a);
			return (0);
		}
		a[j] = ft_atoi(av[i]);
		j++;
		i++;
	}
	free(a);
	return (1);
}

int	valid_arg(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_strcmp(ft_itoa(ft_atoi(av[i])), av[i]) == 1)
			return (0);
		i++;
	}
	i = 0;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (ft_strchr2(av[i], ' ') == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int	number_args(int ac, char **av, char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

int	check_arg(int ac, char **av)
{
	int	i;
	int	j;
	int	*a;

	i = 0;
	while (i < ac)
	{
		if (ft_isdigit(av[i]) == 0)
			return (0);
		i++;
	}
	if (ac < 3)
		return (1);
	if (check_arg_2(ac, av) == 0)
		return (0);
	return (1);
}

int	check_form(int ac, char **av)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		if (ft_strchr2(av[i], ' ') == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
