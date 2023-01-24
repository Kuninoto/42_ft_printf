/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_hexa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <nnuno-ca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:34:14 by nnuno-ca          #+#    #+#             */
/*   Updated: 2023/01/24 21:04:47 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	h_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		digits += 1;
	while (n != 0)
	{
		digits += 1;
		n /= 16;
	}
	return (digits);
}

static void	put_hexa(unsigned int nbr, bool upper_case)
{
	char	upper_digits[] = "0123456789ABCDEF";
	char	lower_digits[] = "0123456789abcdef";

	if (nbr >= 16)
		put_hexa((nbr / 16), upper_case);
	if (upper_case == true)
		write(STDOUT_FILENO, &upper_digits[nbr % 16], 1);
	else
		write(STDOUT_FILENO, &lower_digits[nbr % 16], 1);
}

int	prt_hexa(unsigned int nbr, bool upper_case)
{
	put_hexa(nbr, upper_case);
	return (h_digits(nbr));
}
