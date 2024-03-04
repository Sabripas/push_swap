/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_little.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:18:54 by ssteveli          #+#    #+#             */
/*   Updated: 2024/02/22 13:18:54 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_little(t_list **stack_a, t_list **stack_b, int ac)
{
    t_list *temp;

    temp = *stack_a;
    if (ac == 3)
    {
        if(temp->index > temp->next->index)
        {
            ft_printf("sa\n");
            s(stack_a);
        }
        return ;
    }
    if(temp->next->index > temp->next->next->index && temp->next->next->index > temp->index)
    {
        ft_printf("rra\nsa\n");
        reversr(stack_a);
        s(stack_a);
    }
    else if(temp->index < temp->next->index && temp->index > temp->next->next->index)
    {
        ft_printf("rra\n");
        reversr(stack_a);
    }
    else if(temp->index > temp->next->index && temp->index < temp->next->next->index)
    {
        ft_printf("sa\n");
        s(stack_a);
    }
    else if(temp->index > temp->next->next->index && temp->next->next->index > temp->next->index)
    {
        ft_printf("ra\n");
        r(stack_a);
    }
}