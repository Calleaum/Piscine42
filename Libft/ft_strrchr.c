/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:20:12 by calleaum          #+#    #+#             */
/*   Updated: 2024/10/15 12:10:15 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = (char *)s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (last);
}

// #include <stdio.h>
// int main() {
//     const char *str = "Bonjour, monde! Bonjour encoroe!";
//     char ch = 'o';

//     char *result = ft_strrchr(str, ch);

//     if (result != NULL) {
//         printf("Dernier caractère '%c' position: %ld", ch, result - str);
//     } else {
//         printf("Le caractère '%c' n'a pas été trouvé.\n", ch);
//     }

//     return 0;
// }