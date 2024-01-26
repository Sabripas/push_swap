/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:13:30 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 14:14:46 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*space;
	size_t	i;
	size_t	test;

	test = size * count;
	if (size != 0 && count != 0)
	{
		if (test / size != count)
			return (0);
	}
	i = 0;
	space = malloc(test);
	if (!space)
		return (0);
	while (i < count * size)
	{
		space[i] = 0;
		i++;
	}
	return (space);
}
