#include <unistd.h>

void	ft_write_number(int nbr)
{
	if (nbr > 9)
		ft_write_number(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int main(void)
{
	int nb;
	nb = 1;
	while (nb <=100)
	{
		if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		if (nb % 3 == 0)
			write(1, "fizz\n", 5);
		if (nb % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_write_number(nb);
			write(1, "\n", 1);
		}
		nb++;
	}
}


// Fizzbuzz
// affiche les nombres de 1 a 100 separer par \n
// si le nombre est multiple de 3 ecrire fizz
// si le nombre est multiple de 5 ecrire buzz
// si le nombre est multiple de 3 et de 5 ecrire fizzbuzz
