/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:04:26 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/19 14:40:44 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;
	int				i;

	j = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	unsigned int nb = 5;
//     char dest[100] = "PWET ";
//     char src[5] = "pouet";
// 	/* printf("%s\n", ft_strncat(dest, src, nb)); */
// 	strncat(dest, src, nb);
// 	printf("%s\n", dest);
// }
