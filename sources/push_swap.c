/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 12:25:03 by ssteveli          #+#    #+#             */
/*   Updated: 2024/02/14 12:25:03 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void to_positif(t_list **stack_a, t_list **stack_b, int ac)
{
    t_list *stack;
    int min;
    int i;

    i = 1;
    stack = *stack_a;
    while (i++ < ac)
    {
        min = 2147483647;
        while (stack)
        {
            if (min > stack->content && stack->index == 0)
                min = stack->content;
            stack = stack->next;
        }
        stack = *stack_a;
        while (stack)
        {
            if(stack->content == min)
                stack->index = i;
            stack = stack->next;
        }
        stack = *stack_a;
    }
}

int check_arg(int ac , char **av)
{
    int i;
    int j;
    int *a;

    i = 1;
    if(ac < 2)
        return (0);
    while (i < ac)
    {
        if (ft_isdigit(av[i]) == 0)
            return (0);
        i++;
    }
    a = ft_calloc(ac, sizeof(int));
    i = 1;
    j = 0;
    while (av[i])
    {
        if(ft_strchr(a, ft_atoi(av[i])) == 1)
        {
            free(a);
            return(0);
        }
        a[j] = ft_atoi(av[i]);
        j++;
        i++;
    }
    free(a);
    return (1);
}

int main(int ac, char **av)
{
    t_list	**stack_a;
	t_list	**stack_b;

    if (check_arg(ac, av) == 0)
    {
        ft_printf("ERROR\n");
        return (0);
    }
    stack_a = ft_calloc(1, sizeof(t_list));
    *stack_a = 0;
    stack_b = ft_calloc(1, sizeof(t_list));
    *stack_b = 0;
    init_stack(stack_a, av);
    to_positif(stack_a, stack_b, ac);
    if (ac <= 4)
        sort_little(stack_a, stack_b, ac);
    else
        sort_stack(stack_a, stack_b, ac);
    print_stack(stack_a, stack_b);
    free_stack(stack_a);
    free_stack(stack_b);
}
