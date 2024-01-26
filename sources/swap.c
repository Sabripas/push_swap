/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:18:47 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 14:42:49 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_struct stack)
{
	char	temp;
	
	if (ft_strlen(stack.a) < 2)
		return ;
	temp = stack.a[0];
	stack.a[0] = stack.a[1];
	stack.a[1] = temp;
}

void	sb(t_struct stack)
{
	char	temp;
	
	if (ft_strlen(stack.b) < 2)
		return ;
	temp = stack.b[0];
	stack.b[0] = stack.b[1];
	stack.b[1] = temp;
}

void	ss(t_struct stack)
{
	sa(stack);
	sb(stack);
}
