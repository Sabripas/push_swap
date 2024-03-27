/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilises.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:54:19 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 15:22:59 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strchr2(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != str2[i])
			return (1);
		i++;
	}
	if (str[i] != str2[i])
		return (1);
	return (0);
}

int	sorted(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		if (ft_atoi(av[i]) < ft_atoi(av[i - 1]))
			return (0);
		i++;
	}
	return (1);
}
