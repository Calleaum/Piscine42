/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:21:23 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/15 15:58:12 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int main()
// {
// 	char c[20] = "abcsadsa";
// 	ft_str_is_numeric(c);
// 	printf("%d\n", ft_str_is_numeric(c));

// 		char b[20] = "12354664";
// 	ft_str_is_numeric(c);
// 	printf("%d", ft_str_is_numeric(b));
// }
