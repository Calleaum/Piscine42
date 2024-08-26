/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:35:51 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/21 16:27:54 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>
int main(void)
{
    char *s1;
    char *s2;
    unsigned int n;

    n = 6;

    s1 = "20";
    s2 = "aaa";

    printf("%d\n", ft_strncmp(s1, s2, n));
    printf("%d\n", strncmp(s1, s2, 6));
}*/
