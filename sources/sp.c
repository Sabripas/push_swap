/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:25:18 by ssteveli          #+#    #+#             */
/*   Updated: 2024/02/14 12:25:18 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void s(t_list **stack)
{
    int a;
    t_list *temp;

    temp = *stack;
    a = temp->content;
    temp->content = temp->next->content;
    temp->next->content = a;
    a = temp->index;
    temp->index = temp->next->index;
    temp->next->index = a;
}


void pa(t_list **stack_a, t_list **stack_b)
{
    int a;
    int b;
    t_list *temp;
    t_list *new;

    temp = *stack_b;
    a = temp->content;
    b = temp->index;
    new = ft_lstnew(a, b);
    ft_lstadd_front(stack_a, new);
    if(temp->next != 0)
        *stack_b = temp->next;
    else
        *stack_b = 0;
    free(temp);
}

void pb(t_list **stack_a, t_list **stack_b)
{
    int a;
    int b;
    t_list *temp;
    t_list *new;

    temp = *stack_a;
    a = temp->content;
    b = temp->index;
    new = ft_lstnew(a, b);
    ft_lstadd_front(stack_b, new);
    *stack_a = temp->next;
    free(temp);
}

void ss(t_list **stack_a, t_list **stack_b)
{
    s(stack_a);
    s(stack_b);
}