/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:21:23 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/15 15:58:13 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
// 	char c[20] = "ABCCCCCC";
// 	ft_str_is_lowercase(c);
// 	printf("%d\n", ft_str_is_lowercase(c));

// 		char b[20] = "abcafsd";
// 	ft_str_is_lowercase(c);
// 	printf("%d", ft_str_is_lowercase(b));
// }
