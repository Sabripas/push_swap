/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:16:31 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 16:11:07 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	push_swap(t_struct stack)
{

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
