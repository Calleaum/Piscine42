#include <stdio.h>
#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	len_total(int size, char **strs, char *sep)
{
	int	i;
	int	lenb;

	i = 0;
	lenb = 0;
	while (i < size)
	{
		lenb += str_len(strs[i]);
		i++;
	}
	if (size > 1)
		lenb += str_len(sep) * (size - 1);
	return (lenb);
}


char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	s = malloc(sizeof(char) * (len_total(size, strs, sep) + 1));
	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			s[k++] = sep[j++];
		i++;
	}
	s[k] = '\0';
	return (s);
}


int	main(void)
{
	char	*tableau[4];
	char	*res;
	int		i;

	tableau[0] = "non";
	tableau[1] = "oui";
	tableau[2] = "Salut";
	tableau[3] = "coucou";

	res = ft_strjoin(4, tableau, " | ");

    printf("%s\n", res);
    free(res);


	return (0);
}
