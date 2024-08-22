/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:04:21 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/22 10:58:02 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = max - min;
	res = (int *)malloc(sizeof(int) * i);
	if (res == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = res;
	i = 0;
	while (max > min)
	{
		res[i] = min;
		min++;
		i++;
	}
	return (i);
	free(res);
}

/* #include <stdio.h>
int	main()
{
	int min = 1;
	int max = 200;
	int size;
	int i;
	int *tab;

	i = 0; 
	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
} */