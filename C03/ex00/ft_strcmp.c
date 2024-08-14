/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:43:07 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/13 12:21:48 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/* #include <stdio.h>

int main()
{
    char *test1 = "CouCou";
    char *test2 = "Coucouu";
    printf("strcmp de  \"%s\" et \"%s\"est : %d\n", test1, test2, ft_strcmp(test1, test2));
} */
