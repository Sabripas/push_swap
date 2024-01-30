/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:16:31 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/30 14:40:33 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int num_move(t_struct stack, int i)
{
	int num;
	int j;
	int diff;
	int j_diff;

	j = 0;
	j_diff = 0;
	diff = 2147483647;
	num = ft_atoi(stack.a[i]);
	ft_printf("num = %d\n", num);
	while(stack.b[j])
	{
		if (diff > (stack.a[i] - stack.b[j]))
		{
			diff = stack.a[i] - stack.b[j];
			j_diff = j;
		}
		j++;
	}
	ft_printf("j_diff = %d\n", j_diff);
	return (j_diff);
}


// a = 3 7 9 4
// b = 6 1
// j = 0
// j_diff = 0
// diff = max
// num = 3

// int find_cheap(t_struct stack)
// {
// 	int i;
// 	int min;
// 	int move;

// 	move = 0;
// 	i = 0;
// 	min = 2147483647;
// 	while(stack.a[i])
// 	{
// 		move = num_move(stack, i);
// 		if (move < min)
// 			min = i;
// 	}
// 	return (i);
// }

void	push_swap(t_struct stack)
{
	int i;

	i = 0;
	pb(stack);
	pb(stack);
	num_move(stack, i);
	// while(ft_strlen(stack.a) > 3)
	// {
	// 	i = find_cheap(stack);
	// }
}
int main(int ac, char **av)
{
	int i;
	char *str;
	t_struct stack;

	i = 0;
	if (ac == 1)
	{
		ft_printf("No args");
		return (0);
	}
	stack.a = ft_calloc(ac, sizeof(char));
	stack.b = ft_calloc(ac, sizeof(char));
	while (i + 1 < ac)
	{
		stack.a[i] = av[i + 1][0];
		i++;
	}
	push_swap(stack);
	ft_printf("a = %s\n", stack.a);
	ft_printf("b = %s\n", stack.b);
	free(stack.a);
}
