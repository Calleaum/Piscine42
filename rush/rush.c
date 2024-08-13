// Fonction pour afficher un caractère unique
void	ft_putchar(char c);

void	aff_line_first(int x, int y)
{
	int	i;

	i = 0;
	// Si la hauteur (y) est supérieure à 0, alors on procède
	if (y > 0)
	{
		// Si la largeur (x) est supérieure à 0, alors on procède
		if (x > 0)
		{
			// Affiche le premier caractère 'A' pour la première ligne
			ft_putchar('A');
			// Si la largeur est supérieure à 1, on affiche les caractères intermédiaires
			if (x > 1)
			{
				// Affiche 'B' pour les caractères intermédiaires jusqu'à (x - 2)
				while (i < (x - 2))
				{
					ft_putchar('B');
					i++;
				}
				// Affiche le dernier caractère 'A' pour la première ligne
				ft_putchar('A');
			}
			// Passe à la ligne suivante
			ft_putchar('\n');
		}
	}
}

void	aff_middle_line(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	// Si la largeur (x) est supérieure à 0, alors on procède
	if (x > 0)
	{
		// Boucle pour afficher les lignes du milieu (y - 2 fois)
		while (j < (y - 2))
		{
			// Si la largeur est supérieure à 1, on affiche les bords de la ligne
			if (x > 1)
			{
				i = 0;
				// Affiche le caractère de début de ligne 'B'
				ft_putchar('B');
				// Affiche des espaces pour les caractères intermédiaires de la ligne
				while (i < (x - 2))
				{
					ft_putchar(' ');
					i++;
				}
			}
			// Affiche le caractère de fin de ligne 'B'
			ft_putchar('B');
			j++;
			// Passe à la ligne suivante
			ft_putchar('\n');
		}
	}
}

void	aff_line_last(int x, int y)
{
	int	i;
	int	o;

	i = 0;
	o = x - 2;
	// Si la hauteur (y) est supérieure à 1, alors on procède
	if (y > 1)
	{
		// Si la largeur (x) est supérieure à 0, alors on procède
		if (x > 0)
		{
			// Affiche le premier caractère 'C' pour la dernière ligne
			ft_putchar('C');
			// Si la largeur est supérieure à 1, on affiche les caractères intermédiaires
			if (x > 1)
			{
				// Affiche 'B' pour les caractères intermédiaires jusqu'à (x - 2)
				while (i < o)
				{
					ft_putchar('B');
					i++;
				}
				// Affiche le dernier caractère 'C' pour la dernière ligne
				ft_putchar('C');
			}
			// Passe à la ligne suivante
			ft_putchar('\n');
		}
	}
}

// Fonction principale qui appelle les fonctions pour afficher les différentes parties du motif
void	rush(int x, int y)
{
	// Affiche la première ligne
	aff_line_first(x, y);
	// Affiche les lignes du milieu
	aff_middle_line(x, y);
	// Affiche la dernière ligne
	aff_line_last(x, y);
}
