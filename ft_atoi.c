#include "libft.h"

static unsigned long	attoi(char *str)
{
	unsigned long	n;

	n = 0;
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return (n);
}

int						ft_atoi(char *str)
{
	int				count;
	unsigned long	n;

	count = 1;
	n = 0;
	while (*str == ' ' || (*str >= 7 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count = -1;
		str++;
	}
	if (*str < '0' || *str > '9')
		return (0);
	n = attoi(str);
	if (n > 9223372036854775807 && count == 1)
		return (-1);
	if (n > 9223372036854775807 && count == -1)
		return (0);
	return (count * n);
}
