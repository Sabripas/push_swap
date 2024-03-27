/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:37:44 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 14:37:44 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos(t_list **stack_a, int ac)
{
	t_list	*temp;
	int		i;
	int		min;
	int		pos_min;

	temp = *stack_a;
	i = 0;
	min = 2147483647;
	while (i < ac)
	{
		if (temp->index < min)
		{
			pos_min = i;
			min = temp->index;
		}
		i++;
		temp = temp->next;
	}
	return (pos_min);
}

void	sort_3bis(t_list *temp, t_list **stack_a, t_list **stack_b, int ac)
{
	if (temp->index > temp->next->index
		&& temp->index < temp->next->next->index)
	{
		ft_printf("sa\n");
		s(stack_a);
		return ;
	}
	else if (temp->index > temp->next->next->index
		&& temp->next->next->index > temp->next->index)
	{
		ft_printf("ra\n");
		r(stack_a);
		return ;
	}
	else if (temp->index > temp->next->index
		&& temp->next->index > temp->next->next->index)
	{
		ft_printf("ra\nsa\n");
		r(stack_a);
		s(stack_a);
		return ;
	}
}

void	sort_3(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list	*temp;

	temp = *stack_a;
	if (ac == 3)
	{
		if (temp->next->index > temp->next->next->index
			&& temp->next->next->index > temp->index)
		{
			ft_printf("rra\nsa\n");
			reversr(stack_a);
			s(stack_a);
			return ;
		}
		else if (temp->index < temp->next->index
			&& temp->index > temp->next->next->index)
		{
			ft_printf("rra\n");
			reversr(stack_a);
			return ;
		}
		sort_3bis(temp, stack_a, stack_b, ac);
	}
}

void	sort_4(t_list **stack_a, t_list **stack_b, int ac)
{
	int	pos_min;

	pos_min = find_pos(stack_a, ac);
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
		ft_printf("rra\n");
	}
	pb(stack_a, stack_b);
	ft_printf("pb\n");
	sort_3(stack_a, stack_b, ac - 1);
	pa(stack_a, stack_b);
	ft_printf("pa\n");
}

void	sort_little(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list	*temp;

	temp = *stack_a;
	if (ac == 2)
	{
		if (temp->index > temp->next->index)
		{
			s(stack_a);
			return ;
		}
	}
	if (ac == 3)
		sort_3(stack_a, stack_b, ac);
	if (ac == 4)
		sort_4(stack_a, stack_b, ac);
	if (ac == 5)
		sort_5(stack_a, stack_b, ac);
}
