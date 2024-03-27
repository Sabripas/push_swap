/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:22:19 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 15:22:19 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*new;

	temp = *stack;
	new = ft_lstnew(temp->content, temp->index);
	ft_lstadd_back(stack, new);
	new->index = temp->index;
	*stack = temp->next;
	free(temp);
}

void	reversr(t_list **stack)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack) < 2)
		return ;
	temp = *stack;
	temp2 = ft_lstlast(temp);
	while (temp)
	{
		if (temp->next->next == NULL)
		{
			temp->next = NULL;
			break ;
		}
		temp = temp->next;
	}
	temp2->next = *stack;
	*stack = temp2;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	r(stack_a);
	r(stack_b);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reversr(stack_a);
	reversr(stack_b);
}
