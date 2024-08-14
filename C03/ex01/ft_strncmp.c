/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:35:51 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/13 12:11:56 by calleaum         ###   ########.fr       */
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

/* #include <stdio.h>

int main(void)
{
    char *s1;
    char *s2;
    unsigned int n;

    n = 5;
    
    s1 = "coucou";
    s2 = "coucaa";

    printf("%d\n", ft_strncmp(s1, s2, 1));
} */