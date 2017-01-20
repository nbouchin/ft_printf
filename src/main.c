/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbouchin <nbouchin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:55:23 by nbouchin          #+#    #+#             */
/*   Updated: 2017/01/19 18:27:40 by nbouchin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"
#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main()
{
	   setlocale(LC_ALL, "en_US.UTF-8");
	   printf("%d\n", printf("%4.1S", L"Jambon"));
	   printf("%d\n", ft_printf("%4.1S", L"Jambon"));
}
