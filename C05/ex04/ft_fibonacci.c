/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:37:15 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/18 11:25:36 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/* #include <stdio.h>
int main()
{
    printf("%d, ", ft_fibonacci(-1));
    printf("%d, ", ft_fibonacci(0));
    printf("%d, ", ft_fibonacci(1));
    printf("%d, ", ft_fibonacci(2));
    printf("%d, ", ft_fibonacci(3));
    printf("%d, ", ft_fibonacci(4));
    printf("%d, ", ft_fibonacci(5));
    printf("%d, ", ft_fibonacci(6));
    printf("%d, ", ft_fibonacci(7));
    printf("%d, ", ft_fibonacci(8));
    printf("%d, ", ft_fibonacci(9));
    printf("%d, ", ft_fibonacci(10));
    printf("%d\n", ft_fibonacci(11));
    printf("%d\n", ft_fibonacci(20));

} */