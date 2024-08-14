/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:00:48 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/12 15:41:14 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/* #include <stdio.h>

int main(void)
{
	int	i;
	char	c[50] = "coufsdfsdfsdfdFAFdsfcou";
	i = ft_strlen(c);
	printf("%d", i);

} */