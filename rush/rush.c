// Fonction pour afficher un caract�re unique
void	ft_putchar(char c);

void	aff_line_first(int x, int y)
{
	int	i;

	i = 0;
	// Si la hauteur (y) est sup�rieure � 0, alors on proc�de
	if (y > 0)
	{
		// Si la largeur (x) est sup�rieure � 0, alors on proc�de
		if (x > 0)
		{
			// Affiche le premier caract�re 'A' pour la premi�re ligne
			ft_putchar('A');
			// Si la largeur est sup�rieure � 1, on affiche les caract�res interm�diaires
			if (x > 1)
			{
				// Affiche 'B' pour les caract�res interm�diaires jusqu'� (x - 2)
				while (i < (x - 2))
				{
					ft_putchar('B');
					i++;
				}
				// Affiche le dernier caract�re 'A' pour la premi�re ligne
				ft_putchar('A');
			}
			// Passe � la ligne suivante
			ft_putchar('\n');
		}
	}
}

void	aff_middle_line(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	// Si la largeur (x) est sup�rieure � 0, alors on proc�de
	if (x > 0)
	{
		// Boucle pour afficher les lignes du milieu (y - 2 fois)
		while (j < (y - 2))
		{
			// Si la largeur est sup�rieure � 1, on affiche les bords de la ligne
			if (x > 1)
			{
				i = 0;
				// Affiche le caract�re de d�but de ligne 'B'
				ft_putchar('B');
				// Affiche des espaces pour les caract�res interm�diaires de la ligne
				while (i < (x - 2))
				{
					ft_putchar(' ');
					i++;
				}
			}
			// Affiche le caract�re de fin de ligne 'B'
			ft_putchar('B');
			j++;
			// Passe � la ligne suivante
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
	// Si la hauteur (y) est sup�rieure � 1, alors on proc�de
	if (y > 1)
	{
		// Si la largeur (x) est sup�rieure � 0, alors on proc�de
		if (x > 0)
		{
			// Affiche le premier caract�re 'C' pour la derni�re ligne
			ft_putchar('C');
			// Si la largeur est sup�rieure � 1, on affiche les caract�res interm�diaires
			if (x > 1)
			{
				// Affiche 'B' pour les caract�res interm�diaires jusqu'� (x - 2)
				while (i < o)
				{
					ft_putchar('B');
					i++;
				}
				// Affiche le dernier caract�re 'C' pour la derni�re ligne
				ft_putchar('C');
			}
			// Passe � la ligne suivante
			ft_putchar('\n');
		}
	}
}

// Fonction principale qui appelle les fonctions pour afficher les diff�rentes parties du motif
void	rush(int x, int y)
{
	// Affiche la premi�re ligne
	aff_line_first(x, y);
	// Affiche les lignes du milieu
	aff_middle_line(x, y);
	// Affiche la derni�re ligne
	aff_line_last(x, y);
}
