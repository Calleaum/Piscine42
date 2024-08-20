/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 14:23:06 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/20 14:52:36 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)	
		return (0);
	res = (int *) malloc(sizeof(int));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (res);
}
#include <stdio.h>
int	main()
{
	int min = 5;
	int max = 5;
	int i = 0;
	int size = 
	int *tab = ft_range(min, max);
	printf("%d", tab[i]);
	
}
