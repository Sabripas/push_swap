/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssteveli <ssteveli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:38:53 by ssteveli          #+#    #+#             */
/*   Updated: 2024/01/15 14:15:27 by ssteveli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
int		ft_printf(const char *a, ...);
int		is_chr(char s);
int		is_str(char *s);
int		is_p(unsigned long s);
int		is_d(int nb);
int		is_u(unsigned int nb);
int		is_x(unsigned int s);
int		is_xup(unsigned int s);
int		len_s(unsigned long s);
void	*ft_calloc(size_t count, size_t size);
int		ft_toupper(int c);

#endif