/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvdmeijd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 08:18:16 by jvdmeijd          #+#    #+#             */
/*   Updated: 2020/07/10 09:37:29 by jvdmeijd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c) {
	write(1, &c, 1);
	return 0;
}

void ft_is_negative(int n) {
	if (n < 0) {
		ft_putchar('N');
	}
	else {
		ft_putchar('P');
	}
}

