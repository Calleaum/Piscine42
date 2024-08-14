/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 08:45:36 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/11 09:02:52 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/* #include <stdio.h>

int main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d mod = %d", a, b);
} */
