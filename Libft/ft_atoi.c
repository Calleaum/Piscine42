/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:17:14 by calleaum          #+#    #+#             */
/*   Updated: 2024/10/15 10:09:39 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	negative;

	i = 0;
	res = 0;
	negative = 1;
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * negative);
}
// #include <stdio.h>

// int main()
// {
// 	char c[30] = " \v\f\n\r\t-12345ds445";
// printf("%d", ft_atoi(c));
// }