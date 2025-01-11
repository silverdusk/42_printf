/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmatskev <kmatskev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 21:09:14 by kmatskev          #+#    #+#             */
/*   Updated: 2025/01/11 16:45:09 by kmatskev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

# define BASE_DECIMAL "0123456789"
# define BASE_HEX_LOWER "0123456789abcdef"
# define BASE_HEX_UPPER "0123456789ABCDEF"

// ======================== FT_PRINTF FUNCTIONS =======================
int		ft_printf(const char *format, ...);

// ======================== HELPER FUNCTIONS ==========================
int		ft_putchar(char c);
int		ft_putstr(char *str);
size_t	ft_strlen(const char *str);
int		ft_putnbr_base(long number, const char *base);
int		ft_putnbr_base_ull(unsigned long long n, const char *base);

// ======================== HELPER POINTER FUNCTIONS ==========================
int		ft_putptr_hex(void *ptr);

#endif /* FT_PRINTF_H */
