/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnuno-ca <nnuno-ca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 23:48:46 by nnuno-ca          #+#    #+#             */
/*   Updated: 2023/03/22 19:26:07 by nnuno-ca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
	int output_OG;
	int output_FT;

/////////////////////////////////
//  	  NO SPECIFIERS		   //
/////////////////////////////////
	ft_printf("----------------NO SPECIFIERS---------------\n");
	output_OG = printf("OG -> Test String \t TEeeEEEeEEsT String\n");
	output_FT = ft_printf("FT -> Test String \t TEeeEEEeEEsT String\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> T \t t \n");
	output_FT = ft_printf("FT -> T \t t \n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%c			   //
/////////////////////////////////
	ft_printf("------------%%c------------\n");
	char	ltr = 'C';
	output_OG = printf("OG -> I love %c\n", ltr);
	output_FT = ft_printf("FT -> I love %c\n", ltr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ltr = '\0';
	output_OG = printf("OG -> %c\n", ltr);
	output_FT = ft_printf("FT -> %c\n", ltr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c\n", '0' + 256);
	output_FT = ft_printf("FT -> %c\n", '0' + 256);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c \n", '1', '2', '3');
	output_FT = ft_printf("FT -> %c %c %c \n", '1', '2', '3');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c \n", '2', '1', 0);
	output_FT = ft_printf("FT -> %c %c %c \n", '2', '1', 0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c \n", ' ', ' ', ' ');
	output_FT = ft_printf("FT -> %c %c %c \n", ' ', ' ', ' ');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %c %c %c \n", '0', 0, '1');
	output_FT = ft_printf("FT -> %c %c %c \n", '0', 0, '1');
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
/////////////////////////////////
//				%s			   //
/////////////////////////////////
	ft_printf("------------%%s------------\n");
	char	*str = "Nuno";
	output_OG = printf("OG -> Hi I'm %s\n", str);
	output_FT = ft_printf("FT -> Hi I'm %s\n", str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	char	long_str[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
	output_OG = printf("OG -> %s\n", long_str);
	output_FT = ft_printf("FT -> %s\n", long_str);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	char str2[] = "Atirei o pau no gatis, per gatis num morreus.";
	output_OG = printf("OG -> %s\n", str2);
	output_FT = ft_printf("FT -> %s\n", str2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %s\n", "");
	output_FT = ft_printf("FT -> %s\n", "");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %s\n", "-");
	output_FT = ft_printf("FT -> %s\n", "-");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %s %s\n", "-", "4");
	output_FT = ft_printf("FT -> %s %s\n", "-", "4");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %s %s%s\n", "-", "4", "2");
	output_FT = ft_printf("FT -> %s %s%s\n", "-", "4", "2");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	char	*dummy = NULL;
	output_OG = printf("OG -> This should be NULL: %s\n", dummy);
	output_FT = ft_printf("FT -> This should be NULL: %s\n", dummy);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%p			   //
/////////////////////////////////
	ft_printf("------------%%p------------\n");
	char	*ptr = "c";
	output_OG = printf("OG -> %p\n", ptr);
	output_FT = ft_printf("FT -> %p\n", ptr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	void *dummy_ptr = NULL;
	output_OG = printf("OG -> %p\n", dummy_ptr);
	output_FT = ft_printf("FT -> %p\n", dummy_ptr);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %p\n", (void *)-2);
	output_FT = ft_printf("FT -> %p\n", (void *)-2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *)-1);
	output_FT = ft_printf("FT -> %p\n", (void *)-1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %p\n", (void *)1);
	output_FT = ft_printf("FT -> %p\n", (void *)1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %p\n", (void *)15);
	output_FT = ft_printf("FT -> %p\n", (void *)15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %p\n", (void *)16);
	output_FT = ft_printf("FT -> %p\n", (void *)16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %p\n", (void *)17);
	output_FT = ft_printf("FT -> %p\n", (void *)17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("LONG_MIN && LONG_MAX------------------------\n");

	output_OG = printf("OG ->  %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)LONG_MIN, (void*)LONG_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("INT_MIN && INT_MAX------------------\n");
	output_OG = printf("OG ->  %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)INT_MIN, (void*)INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("ULONG_MAX && -ULONG_MAX------\n");
	output_OG = printf("OG ->  %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)ULONG_MAX, (void*)-ULONG_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("0 && 0--------------------\n");
	output_OG = printf("OG ->  %p %p \n", (void*)0, (void*)0);
	output_FT = ft_printf("FT ->  %p %p \n", (void*)0, (void*)0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%d			   //
/////////////////////////////////
	ft_printf("------------%%d------------\n");
	ft_printf("POSITIVE NUMBERS----------\n");
	int		nbr_pos = 42;
	output_OG = printf("OG -> %d\n", nbr_pos);
	output_FT = ft_printf("FT -> %d\n", nbr_pos);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("INT_MAX-------------------\n");
	output_OG = printf("OG -> %d\n", INT_MAX);
	output_FT = ft_printf("FT -> %d\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	ft_printf("NEGATIVE NUMBERS----------\n");
	int		nbr_neg = -42;
	output_OG = printf("OG -> %d\n", nbr_neg);
	output_FT = ft_printf("FT -> %d\n", nbr_neg);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_neg = -1000000;
	output_OG = printf("OG -> %d\n", nbr_neg);
	output_FT = ft_printf("FT -> %d\n", nbr_neg);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> very long negative number: %d\n", -50000454);
	output_FT = ft_printf("FT -> very long negative number: %d\n", -50000454);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	ft_printf("INT_MIN--------------------\n");
	output_OG = printf("OG -> %d\n", INT_MIN);
	output_FT = ft_printf("FT -> %d\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%i			   //
/////////////////////////////////
	ft_printf("------------%%i------------\n");
	int		nbr_i = 42;
	output_OG = printf("OG -> %i\n", nbr_i);
	output_FT = ft_printf("FT -> %i\n", nbr_i);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%u			   //
/////////////////////////////////
	ft_printf("------------%%u------------\n");
	unsigned nbr_u = 42;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %u\n", 4294967295u);
	output_FT = ft_printf("FT -> %u\n", 4294967295u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = -16;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = -101;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = INT_MAX;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = INT_MIN;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = -9;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = -99;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	nbr_u = -10;
	output_OG = printf("OG -> %u\n", nbr_u);
	output_FT = ft_printf("FT -> %u\n", nbr_u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%x			   //
/////////////////////////////////
	ft_printf("------------%%x------------\n");
	unsigned nbr_x = 520;
	output_OG = printf("OG -> %x\n", nbr_x);
	output_FT = ft_printf("FT -> %x\n", nbr_x);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> 17 in hexadecimal = %x\n", 17);
	output_FT = ft_printf("FT -> 17 in hexadecimal = %x\n", 17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> 999999 in hexadecimal = %x\n", 999999);
	output_FT = ft_printf("FT -> 999999 in hexadecimal = %x\n", 999999);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	output_FT = ft_printf("FT -> 4294967293 in hexadecimal = %x\n", 4294967293u);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");


	output_OG = printf("OG -> %d\n", -100);
	output_FT = ft_printf("FT -> %d\n", -100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %d\n", -15);
	output_FT = ft_printf("FT -> %d\n", -15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", 10);
	output_FT = ft_printf("FT -> %x\n", 10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 11);
	output_FT = ft_printf("FT -> %x\n", 11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -42);
	output_FT = ft_printf("FT -> %x\n", -42);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 42);
	output_FT = ft_printf("FT -> %x\n", 42);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 15);
	output_FT = ft_printf("FT -> %x\n", 15);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 1000);
	output_FT = ft_printf("FT -> %x\n", 1000);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", 0);
	output_FT = ft_printf("FT -> %x\n", 0);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 1);
	output_FT = ft_printf("FT -> %x\n", 1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 9);
	output_FT = ft_printf("FT -> %x\n", 9);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", -1);
	output_FT = ft_printf("FT -> %x\n", -1);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -2);
	output_FT = ft_printf("FT -> %x\n", -2);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %x\n", -101);
	output_FT = ft_printf("FT -> %x\n", -101);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", INT_MAX);
	output_FT = ft_printf("FT -> %x\n", INT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", INT_MIN);
	output_FT = ft_printf("FT -> %x\n", INT_MIN);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", UINT_MAX);
	output_FT = ft_printf("FT -> %x\n", UINT_MAX);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 100);
	output_FT = ft_printf("FT -> %x\n", 100);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -99);
	output_FT = ft_printf("FT -> %x\n", -99);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -16);
	output_FT = ft_printf("FT -> %x\n", -16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -9);
	output_FT = ft_printf("FT -> %x\n", -9);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -14);
	output_FT = ft_printf("FT -> %x\n", -14);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 16);
	output_FT = ft_printf("FT -> %x\n", 16);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 99);
	output_FT = ft_printf("FT -> %x\n", 99);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 101);
	output_FT = ft_printf("FT -> %x\n", 101);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -11);
	output_FT = ft_printf("FT -> %x\n", -11);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", -10);
	output_FT = ft_printf("FT -> %x\n", -10);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %x\n", 17);
	output_FT = ft_printf("FT -> %x\n", 17);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//				%X			   //
/////////////////////////////////
	ft_printf("------------%%X------------\n");
	unsigned nbr_X = 520;
	output_OG = printf("OG -> %X\n", nbr_X);
	output_FT = ft_printf("FT -> %X\n", nbr_X);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

/////////////////////////////////
//		% PERCENTAGE TESTS	   //
/////////////////////////////////
	ft_printf("------------%%%%------------\n");
	output_OG = printf("OG -> %%\n");
	output_FT = ft_printf("FT -> %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	
	output_OG = printf("OG -> %% %%\n");
	output_FT = ft_printf("FT -> %% %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %% %% %%\n");
	output_FT = ft_printf("FT -> %% %% %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");

	output_OG = printf("OG -> %%  %%  %%\n");
	output_FT = ft_printf("FT -> %%  %%  %%\n");
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("--------------------------------MIX-------------------------------\n");
	output_OG = printf("OG -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	output_FT = ft_printf("FT -> %%%s %%%s %%%d %clbum \t 520 in hexadecimal is %x\n", "string1", "string2", 18, 'a', 520);
	printf("OUTPUT OG = %d\n", output_OG);
	ft_printf("OUTPUT FT = %d\n", output_FT);

	ft_printf("\n");
	return (0);
}
