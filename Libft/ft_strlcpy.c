/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:54:39 by calleaum          #+#    #+#             */
/*   Updated: 2024/10/15 13:28:44 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	srclen;
	size_t	i;

	if (!dest || !src)
		return (0);
	i = 0;
	if (srclen != 0)
	{
		while (srclen[i] && i < (srclen - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
