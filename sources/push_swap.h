/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:16:20 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/30 14:43:28 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../Libft/libft.h"

void s(t_list **struct_a);
void pa(t_list **struct_a, t_list **struct_b);
void pb(t_list **struct_a, t_list **struct_b);
void ss(t_list **stack_a, t_list **stack_b);
void r(t_list **stack);
void reversr(t_list **stack);
void rr(t_list **stack_a, t_list **stack_b);
void rrr(t_list **stack_a, t_list **stack_b);
void print_stack(t_list **stack_a, t_list **stack_b);
void	free_stack(t_list **stack);
void    init_stack(t_list **stack, char **av);
char    *to_len(char *str, int len, char *a);
int is_0(int i, int index, int len);
int len_big(t_list **stack_a, t_list **stack_b);
int num_of_b(t_list **stack_b);
void sort_stack(t_list **stack_a, t_list **stack_b, int ac);
void sort_little(t_list **stack_a, t_list **stack_b, int ac);

#endif