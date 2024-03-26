/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2024/02/22 13:17:04 by ssteveli          #+#    #+#             */
/*   Updated: 2024/02/22 13:17:04 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


char	*to_len(char *str, int len, char *a)
{
	int i;
	int j;

	j = 0;
	if (ft_strlen(str) < len)
	{
		i = len - ft_strlen(str);
		while (j < i)
			a[j++] = '0';
		j = 0;
		while (str[j])
		{
			a[i] = str[j];
			i++;
			j++;
		}
	}
	else
		ft_strlcpy(a, str, len + 1);
	return (str);
}

int	is_0(int i, int index, int len)
{
	char *a;
	char *b;
	char *c;

	a = ft_itoa(i);
	b = ft_convert_base(a, "0123456789", "01");
	c = ft_calloc(len + 1, sizeof(char));
	to_len(b, len, c);
	if (c[index] == '1')
	{
		free(a);
		free(b);
		free(c);
		return (1);
	}
	else
	{
		free(a);
		free(b);
		free(c);
		return (0);
	}
}

int	len_big(t_list **stack_a, t_list **stack_b)
{
	t_list *temp;
	char *a;
	char *b;
	int max;
	int len;

	temp = *stack_a;
	len = 0;
	max = 0;
	while (temp != 0)
	{
		a = ft_itoa(temp->index);
		b = ft_convert_base(a, "0123456789", "01");
		len = ft_strlen(b);
		if (max < len)
			max = len;
		temp = temp->next;
		free(a);
		free(b);
	}
	return (max);
}

int	num_of_b(t_list **stack_b)
{
	t_list *temp;
	int i;

	i = 0;
	temp = *stack_b;
	while (temp != 0)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

void	sort_stack(t_list **stack_a, t_list **stack_b, int ac)
{
	t_list *temp;
	int index;
	int i;
	int len;
	int j;

	index = 0;
	len = len_big(stack_a, stack_b);
	index = len - 1;
	while (index >= 0)
	{
		j = ac - 1;
		while (j > 0)
		{
			temp = *stack_a;
			if (is_0(temp->index, index, len) == 0)
			{
				ft_printf("pb\n");
				pb(stack_a, stack_b);
			}
			else
			{
				ft_printf("r\n");
				r(stack_a);
			}
			j--;
		}
		i = num_of_b(stack_b);
		while (i > 0)
		{
			ft_printf("pa\n");
			pa(stack_a, stack_b);
			i--;
		}
		index -= 1;
	}
}