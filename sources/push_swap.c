/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 13:48:01 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 13:48:01 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	to_positif(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list	*stack;
	int		min;
	int		i;

	i = 0;
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
			if (stack->content == min)
				stack->index = i;
			stack = stack->next;
		}
		stack = *stack_a;
	}
}

char	**to_args(int ac, char **av)
{
	char	**args;
	int		i;

	i = 1;
	if (ft_strchr2(av[1], ' ') == 1)
	{
		args = ft_calloc(ac, sizeof(char *));
		if (!args)
			return (0);
		while (i <= ac)
		{
			args[i - 1] = av[i];
			i++;
		}
		return (args);
	}
	args = ft_split(av[1], ' ');
	return (args);
}

int	sort_list(int num_args, char **args, t_list **stack_a, t_list **stack_b)
{
	if (sorted(num_args, args) == 0)
	{
		stack_a = ft_calloc(1, sizeof(t_list));
		if (!stack_a)
			return (0);
		*stack_a = 0;
		stack_b = ft_calloc(1, sizeof(t_list));
		if (!stack_b)
			return (0);
		*stack_b = 0;
		init_stack(stack_a, args);
		to_positif(stack_a, stack_b, num_args);
		if (num_args >= 2 && num_args < 6)
			sort_little(stack_a, stack_b, num_args);
		else
			sort_stack(stack_a, stack_b, num_args);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (1);
}

int	check_ac(int ac, char **av)
{
	if (ac <= 1)
		return (0);
	if (ac > 2)
	{
		if (check_form(ac, av) == 0)
		{
			write(2, "Error\n", 6);
			return (0);
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;
	int		num_args;
	char	**args;

	if (check_ac(ac, av) == 0)
		return (0);
	args = to_args(ac, av);
	if (args == 0)
		return (0);
	num_args = number_args(ac, av, args);
	if (check_arg(num_args, args) == 0 || valid_arg(num_args, args) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (num_args < 2)
		return (0);
	sort_list(num_args, args, stack_a, stack_b);
	free(args);
}
