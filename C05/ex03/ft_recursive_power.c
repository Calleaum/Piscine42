/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:52:26 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/15 16:46:28 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 0)
		return (ft_recursive_power(nb, power - 1) * nb);
	return (nb);
}

/* #include <stdio.h>
int	main()
{
	ft_recursive_power(5, 5);
	printf("%d", ft_recursive_power(5, 5));
} */