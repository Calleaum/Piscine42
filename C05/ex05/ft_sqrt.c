/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 08:54:16 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/25 20:12:34 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/* #include <stdio.h>
int main()
{
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(49));
	printf("%d\n", ft_sqrt(22));
	printf("%d\n", ft_sqrt(1000000));
} */
