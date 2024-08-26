/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 11:34:23 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/25 20:15:45 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/* #include <stdio.h>
int main()
{
	printf("Nombres premier :\n%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(11));
	printf("Nombres non premier :\n%d", ft_is_prime(1));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(8));
	printf("%d\n", ft_is_prime(20));
} */