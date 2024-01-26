/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 15:56:55 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 16:09:47 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ra(t_struct stack)
{
	char temp;

	temp = stack.a[0];
	r_decal_a(stack);
	stack.a[ft_strlen(stack.a)] = temp;
}

void rb(t_struct stack)
{
	char temp;

	temp = stack.b[0];
	r_decal_b(stack);
	stack.b[ft_strlen(stack.b)] = temp;
}

void rra(t_struct stack)
{
	char temp;

	temp = stack.a[ft_strlen(stack.a) - 1];
	stack.a[ft_strlen(stack.a) - 1] = '\0';
	decal_a(stack);
	stack.a[0] = temp;
}

void rrb(t_struct stack)
{
	char temp;

	temp = stack.b[ft_strlen(stack.b) - 1];
	stack.b[ft_strlen(stack.b) - 1] = '\0';
	decal_b(stack);
	stack.b[0] = temp;
}