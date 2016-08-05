/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserguie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 16:39:05 by aserguie          #+#    #+#             */
/*   Updated: 2016/08/04 19:06:25 by aserguie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_0_1(char a, char b)
{
	while (number[0] <= 57)
	{
		a=48;
		a

		while ((a <= 57) && ((number[0] != 57) || (a !=57)))
		{

ft_print_1_2(void)



		
	}
	number[0]++;
	}
}



ft_print_0_2(void)
{




}






void	ft_print_comb2(void)
{
	
	char number[4];
	number[0] = 48;

			number[2]=number[0];

			int i;
			i = 0;

			while (number[2] <= 57)
			{
				
				if (i == 0)
				{
					number[3]=a +1 ;
				}
				else
				{
					number[3] = 48;
				}

					while (number[3] <= 57)
					{
						ft_putchar(number[0]);
						ft_putchar(a);
						ft_putchar(' ');
						ft_putchar(number[2]);
						ft_putchar(number[3]);
						
						if (!((number[0] == 57) && (a == 56)))
						{					
							ft_putchar(',');
						}
						number[3]++;
					}
				
				i = 1;
				number[2]++;
			
			
		}
		a++;

}

int		main(void)
{
	ft_print_comb2();
}
