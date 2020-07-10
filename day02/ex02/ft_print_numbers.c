/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvdmeijd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 17:26:00 by jvdmeijd          #+#    #+#             */
/*   Updated: 2020/07/10 09:36:26 by jvdmeijd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_numbers(void)
{
	char Mein_Nummer='0';
	while (Mein_Nummer<='9')
	{
		ft_putchar(Mein_Nummer);
		Mein_Nummer++;
	}
}

