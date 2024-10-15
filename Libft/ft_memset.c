/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:15:20 by calleaum          #+#    #+#             */
/*   Updated: 2024/10/15 09:36:43 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memset(void *ptr, int c, size_t len)
{
	char	*str;

	str = ptr;
	while (len)
	{
		*str = (unsigned char) c;
		str++;
		len--;
	}
	return (ptr);
}
// int main()
// {
//     char buffer[200];

//     ft_memset(buffer, 'A', 100);

//     buffer[20] = '\0';

//     printf("Contenu du buffer après ft_memset: %s\n", buffer);

//     printf("\n");

//     return 0;
// }