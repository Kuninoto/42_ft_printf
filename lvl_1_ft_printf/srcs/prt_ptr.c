/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prt_ptr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <nnuno-ca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:01:49 by nnuno-ca          #+#    #+#             */
/*   Updated: 2022/11/16 21:55:09 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	prt_ptr(void *ptr_addr)
{
	if (ptr_addr == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return (prt_hexa((unsigned long int)ptr_addr, false) + 2);
}
