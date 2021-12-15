#include <unistd.h>

void	ft_putnbr(int nb)
{
	long int	nbl;
	int			div;
	int			mod;
	char		modchar;

	nbl = nb;
	if (nbl < 0)
	{
		nbl = nbl * -1;
		write(1, "-", 1);
	}
	div = nbl / 10;
	mod = nbl % 10;
	if (div > 0)
	{
		ft_putnbr(div);
	}
	modchar = mod + 48;
	write(1, &modchar, 1);
}

int	main(void)
{
	ft_putnbr(4321);
}