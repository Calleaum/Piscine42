/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:23:06 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/27 11:25:23 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
		return (0);
	i = max - min;
	res = (int *)malloc(sizeof(int) * i);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int	main()
// {
// 	int min = 5;
// 	int max = 1000;
// 	int size = max - min;
// 	int i = 0;
// 	int *tab; 
// 	tab = ft_range(min, max);
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// }
