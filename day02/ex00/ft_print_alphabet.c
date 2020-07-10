/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvdmeijd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 09:00:57 by jvdmeijd          #+#    #+#             */
/*   Updated: 2020/07/10 09:33:15 by jvdmeijd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_alphabet(void) {
	char start;
	char end;

	start = 'a';
	end = 'z';
	while (start <= end) {
		ft_putchar(start);
		start++;
	}
}

void ft_putchar(char c) {
	write(1, &c, 1);
}

