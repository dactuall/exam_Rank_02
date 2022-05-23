#include "lvl1.h"

void	ft_print_num(int	i)
{
	char	*str = "0123456789";

	if (i > 9)
		ft_print_num(i / 10);
	write(1, &str[i % 10], 1);
}

void 	fizzbuzz()
{
	int	i;

	i = 1;
	while(i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_print_num(i);
		write(1, "\n", 1);
		i++;
	}
}

