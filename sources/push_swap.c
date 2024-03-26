/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/02/14 12:25:03 by ssteveli          #+#    #+#             */
/*   Updated: 2024/02/14 12:25:03 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	to_positif(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list *stack;
	int min;
	int i;

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

int ft_strchr2(char *str, char c)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		if (str[i] == c)
			return(0);
		i++;
	}
	return (1);
}

int	check_arg(int ac, char **av)
{
	int i;
	int j;
	int *a;

	i = 0;
	while (i < ac)
	{
		if (ft_isdigit(av[i]) == 0)
			return (0);
		i++;
	}
	if (ac < 3)
		return (1);
	a = ft_calloc(ac, sizeof(int));
	i = 1;
	j = 0;
	while (av[i])
	{
		if (ft_strchr(a, ft_atoi(av[i])) == 1)
		{
			free(a);
			return (0);
		}
		a[j] = ft_atoi(av[i]);
		j++;
		i++;
	}
	free(a);
	return (1);
}

char	**to_args(int ac, char **av)
{
	char **args;
	int i;

	i = 1;
	if (ft_strchr2(av[1], ' ') == 1)
	{
		args = ft_calloc(ac, sizeof(char *));
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

int	number_args(int ac, char **av, char **args)
{
	int i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

int ft_strcmp(char *str, char *str2)
{
	int i;

	i = 0;
	while(str[i])
	{
		if (str[i] != str2[i])
			return (1);
		i++;
	}
	if (str[i] != str2[i])
		return (1);
	return (0);
}

int valid_arg(int ac, char **av)
{
	int i;

	i = 0;
	while(i < ac)
	{
		if(ft_strcmp(ft_itoa(ft_atoi(av[i])), av[i]) == 1)
			return (0);
		i++;
	}
	i = 0;
	if (ac > 1)
	{
		while(i < ac)
		{
			if(ft_strchr2(av[i], ' ') == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int check_form(int ac, char **av)
{
	int i;

	i = 0;
	while(i < ac)
	{
		if (ft_strchr2(av[i], ' ') == 0)
		{
			return (0);	
		}
		i++;
	}
	return (1);
}

int sorted(int ac, char **av)
{
	int i;

	i = 1;
	while(i < ac)
	{
		if(ft_atoi(av[i]) < ft_atoi(av[i - 1]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list **stack_a;
	t_list **stack_b;
	int num_args;
	char **args;

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
	args = to_args(ac, av);
	num_args = number_args(ac, av, args);
	if (check_arg(num_args, args) == 0 || valid_arg(num_args, args) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (num_args < 3)
		return (0);
	if (sorted(num_args, args) == 0)
	{
		stack_a = ft_calloc(1, sizeof(t_list));
		*stack_a = 0;
		stack_b = ft_calloc(1, sizeof(t_list));
		*stack_b = 0;
		init_stack(stack_a, args);
		to_positif(stack_a, stack_b, num_args);
		if(num_args > 2 && num_args < 6)
			sort_little(stack_a, stack_b, num_args);
		else
			sort_stack(stack_a, stack_b, num_args);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	free(args);
}
