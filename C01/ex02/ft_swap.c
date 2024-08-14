/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:01:36 by calleaum          #+#    #+#             */
/*   Updated: 2024/08/10 08:44:57 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	val;

	val = *b;
	*b = *a;
	*a = val;
}

/* #include <stdio.h>
int main()
{
    int val1; 
    int val2;

    val1 = 10;
    val2 = 20;


	ft_swap(&val1, &val2);
	printf("val1 = %d val2 = %d", val1, val2);
} */