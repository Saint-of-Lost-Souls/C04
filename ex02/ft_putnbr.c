#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-'); // if 42 is less than 0, put -, i = -42
		i = -nb;
	}
	else
	{
		i = nb;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + 48);
}

int main()
{
    ft_putnbr(10);
    return 0;

}