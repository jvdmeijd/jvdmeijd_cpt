# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvdmeijd <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/08 15:54:43 by jvdmeijd          #+#    #+#              #
#    Updated: 2020/07/08 17:19:39 by jvdmeijd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep "ether" | cut -c 8-
