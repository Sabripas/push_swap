/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:27:48 by ssteveli          #+#    #+#             */
/*   Updated: 2024/03/27 15:27:48 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../Libft/libft.h"

void	s(t_list **struct_a);
void	pa(t_list **struct_a, t_list **struct_b);
void	pb(t_list **struct_a, t_list **struct_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	r(t_list **stack);
void	reversr(t_list **stack);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	print_stack(t_list **stack_a, t_list **stack_b);
void	free_stack(t_list **stack);
void	init_stack(t_list **stack, char **av);
char	*to_len(char *str, int len, char *a);
int		is_0(int i, int index, int len);
int		len_big(t_list **stack_a, t_list **stack_b);
int		num_of_b(t_list **stack_b);
void	sort_stack(t_list **stack_a, t_list **stack_b, int ac);
void	sort_little(t_list **stack_a, t_list **stack_b, int ac);
int		check_form(int ac, char **av);
int		check_arg(int ac, char **av);
int		valid_arg(int ac, char **av);
int		ft_strchr2(char *str, char c);
int		check_arg_2(int ac, char **av);
int		number_args(int ac, char **av, char **args);
int		ft_strcmp(char *str, char *str2);
int		sorted(int ac, char **av);
char	*to_len(char *str, int len, char *a);
void	sort_5(t_list **stack_a, t_list **stack_b, int ac);
int		find_pos(t_list **stack_a, int ac);
void	sort_4(t_list **stack_a, t_list **stack_b, int ac);

#endif