/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:21:23 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/15 15:58:15 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
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
// 	char c[20] = "abfsdfc";
// 	ft_str_is_uppercase(c);
// 	printf("%d\n", ft_str_is_uppercase(c));

// 		char b[20] = "ABDSADC";
// 	ft_str_is_uppercase(c);
// 	printf("%d", ft_str_is_uppercase(b));
// }
