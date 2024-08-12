/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgrisel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 16:18:08 by lgrisel           #+#    #+#             */
/*   Updated: 2024/08/11 18:52:33 by ameduboi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	aff_line_first(int x, int y)
{
	int	i;

	i = 0;
	if (y > 0)
	{
		if (x > 0)
		{
			ft_putchar('A');
			if (x > 1)
			{
				while (i < (x - 2))
				{
					ft_putchar('B');
					i++;
				}
				ft_putchar('C');
			}
			ft_putchar('\n');
		}
	}
}

void	aff_middle_line(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	if (x > 0)
	{
		while (j < (y - 2))
		{
			if (x > 1)
			{
				i = 0;
				ft_putchar('B');
				while (i < (x - 2))
				{
					ft_putchar(' ');
					i++;
				}
			}
			ft_putchar('B');
			j++;
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
	if (y > 1)
	{
		if (x > 0)
		{
			ft_putchar('C');
			if (x > 1)
			{
				while (i < o)
				{
					ft_putchar('B');
					i++;
				}
				ft_putchar('A');
			}
			ft_putchar('\n');
		}
	}
}

void	rush(int x, int y)
{
	aff_line_first(x, y);
	aff_middle_line(x, y);
	aff_line_last(x, y);
}
