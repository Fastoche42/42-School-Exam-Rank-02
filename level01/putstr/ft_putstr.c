#include <unistd.h>

void	ft_putstr(charr *str)
{
	int	i = 0;

	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}
