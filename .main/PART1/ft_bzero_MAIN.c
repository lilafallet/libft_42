#include "libft.h"
#include <strings.h>

int	main(int ac, char **av)
{
	(void)ac;
	ft_bzero(av[1], atoi(av[2]));
	bzero(av[1], atoi(av[2]));
	return (EXIT_SUCCESS);
}