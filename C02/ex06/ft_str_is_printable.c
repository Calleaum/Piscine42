/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 08:21:23 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/15 15:58:17 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//  #include <stdio.h>
// int main()
// {
// 	char c[30] = "ݷݷݷݷݷݷݷ";
// 	ft_str_is_printable(c);
// 	printf("%d\n", ft_str_is_printable(c));

// 		char b[30] = "abcfdsfsdSQS125";
// 	ft_str_is_printable(c);
// 	printf("%d", ft_str_is_printable(b));
// }
