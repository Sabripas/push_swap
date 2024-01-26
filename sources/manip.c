/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manip.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:44:48 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 15:55:52 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void decal_a(t_struct stack)
{
	char *str;
	int i;
	
	i = 0;
	str = ft_calloc(ft_strlen(stack.a) + 1, sizeof(char));	
	while (stack.a[i])
	{
		str[i] = stack.a[i];
		i++;
	}
	i = 0;
	while(str[i])
	{
		stack.a[i + 1] = str[i];
		i++;
	}
	free(str);
}

void decal_b(t_struct stack)
{
	char *str;
	int i;
	
	i = 0;
	str = ft_calloc(ft_strlen(stack.b) + 1, sizeof(char));	
	while (stack.b[i])
	{
		str[i] = stack.b[i];
		i++;
	}
	i = 0;
	while(str[i])
	{
		stack.b[i + 1] = str[i];
		i++;
	}
	free(str);
}

void r_decal_a(t_struct stack)
{
	char *str;
	int i;
	
	i = 0;
	str = ft_calloc(ft_strlen(stack.a) + 1, sizeof(char));	
	while (stack.a[i])
	{
		str[i] = stack.a[i];
		i++;
	}
	i = 0;
	while(stack.a[i])
	{
		stack.a[i] = str[i + 1];
		i++;
	}
	free(str);
}

void r_decal_b(t_struct stack)
{
	char *str;
	int i;
	
	i = 0;
	str = ft_calloc(ft_strlen(stack.b) + 1, sizeof(char));	
	while (stack.b[i])
	{
		str[i] = stack.b[i];
		i++;
	}
	i = 0;
	while(stack.b[i])
	{
		stack.b[i] = str[i + 1];
		i++;
	}
	free(str);
}