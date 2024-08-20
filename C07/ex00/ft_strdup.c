/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:18:08 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/20 14:20:22 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*dest;

	length = 0;
	while (src[length])
		length++;
	dest = (char *) malloc(sizeof(char));
	if (dest == NULL )
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(dest);
	free(dest);
}
// #include <stdio.h>

// #include <string.h>
// int main()
// {
// 	char *str;
// 	char *dest;
// 	str = "coucou les gens";
// 	dest = ft_strdup(str);
// 	printf("%s", dest);
// }