/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvdmeijd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:45:17 by jvdmeijd          #+#    #+#             */
/*   Updated: 2020/07/10 09:35:42 by jvdmeijd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_print_reverse_alphabet(void) {
	char start;
	char end;

	start = 'z';
	end = 'a';
	while (start >= end) {
		ft_putchar(start);
		start--;
	}
}

void ft_putchar(char c){
	write(1, &c, 1);
}

