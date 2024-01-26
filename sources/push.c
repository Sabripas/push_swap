/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 14:43:16 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 15:55:10 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_struct stack)
{
	decal_a(stack);
	stack.a[0] = stack.b[0];
	r_decal_b(stack);
}

void	pb(t_struct stack)
{
	decal_b(stack);
	stack.b[0] = stack.a[0];
	r_decal_a(stack);
}