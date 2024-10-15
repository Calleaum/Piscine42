/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:27:59 by calleaum          #+#    #+#             */
/*   Updated: 2024/10/15 08:44:22 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>

// int main(void)
// {
// 	int	i;
// 	char	c[50] = "coufsdfsdfsdfdFAFdsfcou";
// 	i = ft_strlen(c);
// 	printf("%d", i);

// }
