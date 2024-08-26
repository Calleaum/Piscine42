/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:43:07 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/19 14:40:20 by calleaum         ###   ########.fr       */
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
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char *test1 = "abcd";
//     char *test2 = "abcddd";
//     printf("\"%s\" et \"%s\" = %d\n", test1, test2, ft_strcmp(test1, test2));
// 	printf("%s et %s = %d", test1, test2, strcmp(test1, test2));
// }
