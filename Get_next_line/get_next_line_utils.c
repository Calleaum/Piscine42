/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:18:10 by calleaum          #+#    #+#             */
/*   Updated: 2024/12/09 11:47:38 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *str, int c)
{
	if (!str)
		return (NULL);
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	pos1;
	size_t	pos2;
	char	*str;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		s1[0] = '\0';
	}
	str = malloc(sizeof(char) * ((ft_strlen(s1) + ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	pos1 = 0;
	pos2 = 0;
	while (s1[pos1])
	{
		str[pos1] = s1[pos1];
		pos1++;
	}
	while (s2[pos2])
		str[pos1++] = s2[pos2++];
	str[pos1] = '\0';
	return (free(s1), str);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	pos;

	if (!s || start > ft_strlen(s))
		return (malloc(1));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	pos = 0;
	while (pos < len && s[start + pos])
	{
		result[pos] = s[start + pos];
		pos++;
	}
	result[pos] = '\0';
	return (result);
}

int	ft_end_line(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	if (str[i] == '\n')
		return (1);
	return (0);
}
