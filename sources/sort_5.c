/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:40:51 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 15:22:28 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_pos_5(int pos_min, t_list **stack_a, t_list **stack_b)
{
	if (pos_min == 1)
	{
		r(stack_a);
		ft_printf("ra\n");
	}
	if (pos_min == 2)
	{
		r(stack_a);
		r(stack_a);
		ft_printf("ra\nra\n");
	}
	if (pos_min == 3)
	{
		reversr(stack_a);
		reversr(stack_a);
		ft_printf("rra\nrra\n");
	}
	if (pos_min == 4)
	{
		reversr(stack_a);
		ft_printf("rra\n");
	}
}

void	sort_5(t_list **stack_a, t_list **stack_b, int ac)
{
	int	pos_min;

	pos_min = find_pos(stack_a, ac);
	sort_pos_5(pos_min, stack_a, stack_b);
	pb(stack_a, stack_b);
	ft_printf("pb\n");
	sort_4(stack_a, stack_b, ac - 1);
	pa(stack_a, stack_b);
	ft_printf("pa\n");
}
