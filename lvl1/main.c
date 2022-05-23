#include "lvl1.h"

int	main(int	argc, char	**argv)
{
	int	i;

	i = 0;
	if (argc == 1)
	{
		printf("TESTS:\n\n");
		printf("Test putstr() run:\n./lvl1test 1\n\n");
		printf("Test fizzbuzz() run:\n./lvl1test 2\n\n");
		printf("Test ft_strlen() run:\n./lvl1test 3\n\n");
		printf("Test ft_strcpy() run:\n./lvl1test 4\n\n");
		printf("Test ft_swap() run:\n./lvl1test 5\n\n");

		printf("Test argvSubject:\ncd argvSubject/\n\n");

		printf("Test first_word.c:\ngcc first_word.c && ./a.out first\n\n");
		printf("Test repeat_alpha.c\ngcc repeat_alpha.c && ./a.out aAbBcCdDeE\n\n");
		printf("Test rev_print.c\ngcc rev_print.c && ./a.out Bambuk\n\n");
		printf("Test rot_13.c\ngcc rot_13.c && ./a.out amAMnNzZ\n\n");
		printf("Test rotone.c\ngcc rotone.c && ./a.out aAbBcCzZ\n\n");
		printf("Test search_and_replace.c\ngcc search_and_replace.c && ./a.out Bambuk b z\n\n");
		printf("Test ulstr.c\ngcc ulstr.c && ./a.out AAAaaaAAAaaaZZZzzzZZZzzz\n");

		printf("finish\n");
	}
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == '1')
				putstr("Test putstr\n");
			else if (argv[1][i] == '2')
				fizzbuzz();
			else if (argv[1][i] == '3')
			{
				int	len_w = ft_strlen("Bambuk");
				printf("Test ft_strlen() count Bambuk\nlen_word = %d\n", len_w);
				
			}
			else if (argv[1][i] == '4')
			{
				char	*dst = "Ramaz";
				char	*src = "Sanya";
				printf("Test ft_strcpy() src copy in dst\n");
				printf("dst = %s --- src = %s\n", dst, src);
				dst = ft_strcpy(dst, src);
				printf("dst = %s --- src = %s\n", dst, src);
			}
			else if (argv[1][i] == '5')
			{
				char	s1[6] = "Ramaz";
				char	s2[6] = "Sanya";


				printf("pointer a = %p --- b = %p\n", s1, s2);
				ft_swap((int *)s1, (int *)s2);
				printf("pointer a = %p --- b = %p\n", s1, s2);
			}
			i++;
		}
		write(1, "finish\n", 7);
	}
	return (0);
}
