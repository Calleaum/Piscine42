/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:04:26 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/19 14:40:32 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;
	char	*res;

	j = 0;
	i = 0;
	res = dest;
	while (dest[i])
		i++;
	while (src[j])
	{
		res[i] = src[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char dest[22] = "Test1 ";
//     char src[] = "Test2";

//     printf("%s\n",ft_strcat(dest, src));
// /* 	printf("%s", strcat(dest, src)); */

// }
