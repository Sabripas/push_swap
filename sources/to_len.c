/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:36:22 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 15:44:31 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*to_len(char *str, int len, char *a)
{
	int	i;
	int	j;

	j = 0;
	if (ft_strlen(str) < len)
	{
		i = len - ft_strlen(str);
		while (j < i)
			a[j++] = '0';
		j = 0;
		while (str[j])
		{
			a[i] = str[j];
			i++;
			j++;
		}
	}
	else
		ft_strlcpy(a, str, len + 1);
	return (str);
}
