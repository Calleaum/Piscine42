/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:36:16 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/27 17:43:58 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*result;

	i = 0;
	total_len = 0;
	if (size == 0)
		return (malloc(1));
	while (i < size)
		total_len += ft_strlen(strs[i++]);
	total_len += ft_strlen(sep) * (size - 1);
	result = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!result)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i++ < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
#include <stdio.h>
int	main(void)
{
	char *strs[] = {"Hello", "World", "42", "ok"};
	char *sep = "__";
	char *result;

	result = ft_strjoin(4, strs, sep);

	printf("Résultat: %s\n", result);
	free(result);
}
	