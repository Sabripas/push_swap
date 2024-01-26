/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:16:20 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 16:04:18 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../libraries/Libft/ft_printf.h"

typedef struct s_struct
{
	char *a;
	char *b;
}					t_struct;

void	sa(t_struct stack);
void	sb(t_struct stack);
void	ss(t_struct stack);
void decal_a(t_struct stack);
void r_decal_a(t_struct stack);
void decal_b(t_struct stack);
void	pa(t_struct stack);
void	pb(t_struct stack);
void r_decal_b(t_struct stack);
void ra(t_struct stack);
void rb(t_struct stack);
void rra(t_struct stack);
void rrb(t_struct stack);
void rr(t_struct stack);
void rrr(t_struct stack);

#endif