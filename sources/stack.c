/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:25:21 by ssteveli          #+#    #+#             */
/*   Updated: 2024/02/14 12:25:21 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    init_stack(t_list **stack, char **av)
{
    int     i;
    t_list *new;

    i = 1;
    while (av[i])
	{
		new = ft_lstnew(ft_atoi(av[i]), 0);
		ft_lstadd_back(stack, new);
		i++;
	}
}

void	free_stack(t_list **stack)
{
	t_list	*head;
	t_list	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}

void print_stack(t_list **stack_a, t_list **stack_b)
{
    t_list *temp;
    t_list *temp2;

    temp = *stack_a;
    ft_printf("a = ");
    while (temp != 0)
    {
        ft_printf("%d, %d\n", temp->content, temp->index);
        temp = temp->next;
    }
    ft_printf("\nb = ");
    temp2 = *stack_b;
    while (temp2 != 0)
    {
        ft_printf("%d, %d\n", temp2->content, temp2->index);
        temp2 = temp2->next;
    }
    ft_printf("\n");
}