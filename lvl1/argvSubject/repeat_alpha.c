#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int	i;
	int	repeat;

	i = 0;
	if (argc == 2)
	{
		repeat = 1;
		while(argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repeat += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repeat += argv[1][i] - 'A';
			while (repeat)
			{
				write(1, &argv[1][i], 1);
				repeat--;
			}
			repeat = 1;
			i++;
		}
		write(1, "\n", 1);
	}
}
