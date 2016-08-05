#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb);

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main()
{
	int a;
	int b;
	int c;
	int d;
	int *div;
	int *mod;
//	int ***nbr3;
//	int ****nbr4;
//	int *****nbr5;
//	int ******nbr6;
//	int *******nbr7;
//	int ********nbr8;
//	int *********nbr9;
	
		
	a = -10;
	b = 11;
	div = &c;
	mod = &d;
//	nbr3 = &nbr2;
//	nbr4 = &nbr3;
//	nbr5 = &nbr4;
//	nbr6 = &nbr5;
//	nbr7 = &nbr6;
//	nbr8 = &nbr7;
//	nbr9 = &nbr8;
	
	ft_putnbr(a);
	ft_putnbr(b);
//	ft_putnbr(c);
//	ft_putnbr(d);
	ft_putchar(' ');
	ft_div_mod(a, b, div, mod);
	ft_putnbr(c);
	ft_putnbr(d);
}
