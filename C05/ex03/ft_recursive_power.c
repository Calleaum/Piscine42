/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:52:26 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/26 03:24:46 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (power == 0)
		return (0);
	if (power == 1)
		return (nb);
	else if (power > 0)
		return (ft_recursive_power(nb, power - 1) * nb);
	return (nb);
}

#include <stdio.h>
int	main()
{
	printf("%d\n", ft_recursive_power(3, 2));
	printf("%d\n", ft_recursive_power(5, -5));
	printf("%d\n", ft_recursive_power(5, 0));
	printf("%d\n", ft_recursive_power(5, 5));
}