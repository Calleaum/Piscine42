/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: calleaum <calleaum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:18:06 by calleaum          #+#    #+#             */
/*   Updated: 2024/12/18 14:05:54 by calleaum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_read_buffer(int fd, char *buffer)
{
	char	*temp;
	int		len;

	temp = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	len = 1;
	while (!ft_strchr(buffer, '\n') && len != 0)
	{
		len = read(fd, temp, BUFFER_SIZE);
		if (len < 0)
			return (free(temp), free(buffer), NULL);
		temp[len] = '\0';
		buffer = ft_strjoin(buffer, temp);
	}
	return (free(temp), buffer);
}

static char	*ft_update_buffer(char *buffer)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (!buffer[i])
		return (free(buffer), NULL);
	str = malloc(sizeof(char) * (ft_strlen(buffer) - i + 1));
	if (!str)
		return (free(str), NULL);
	i++;
	j = 0;
	while (buffer[i])
		str[j++] = buffer[i++];
	str[j] = '\0';
	return (free(buffer), str);
}

static char	*ft_get_line(char *buffer)
{
	int		len;
	char	*line;

	len = 0;
	if (!buffer[len])
		return (NULL);
	while (buffer[len] && buffer[len] != '\n')
		len++;
	line = ft_substr(buffer, 0, len + ft_end_line(buffer));
	if (!line)
		return (free(line), NULL);
	return (line);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_get_line(buffer);
	buffer = ft_update_buffer(buffer);
	return (line);
}

// int	main(int argc, char **argv)
// {
//     int     fd;
//     char    *line;

// 	if (argc != 2)
//     {
// 		printf ("\033[31;01mUsage: %s <file>\n\033[00m", argv[0]);
//         return (1);
//     }
//     fd = open(argv[1], O_RDONLY);
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("\033[33;11m%s\033[00m", line);
//         free(line);
//     }
//     if (close(fd) < 0)
//     {
// 		printf("%s\n", line);
//         printf("\033[31;01mError closing file\n\033[00m");
//         return (1);
//     }
//     return (0);
// }
