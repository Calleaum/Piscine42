/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:04:26 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/14 08:38:47 by calleaum         ###   ########.fr       */
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
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		res[i] = src[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}
/* #include <stdio.h>
int main()
{
    char dest[100] = "PWET ";
    char src[] = "pwet";

    printf("%s, ",ft_strcat(dest, src));

} */
