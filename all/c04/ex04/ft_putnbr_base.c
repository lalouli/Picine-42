/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 14:03:50 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/15 15:53:37 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_base(int	nbr, char	*base, int	l)
{
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -1 * nbr;
	}
	if (nbr >= l)
		ft_base(nbr / l, base, l);
	write(1, &base[nbr % l], 1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	int	i ;
	int	l ;

	l = 0;
	while (base[l] != '\0')
		l++;
	if (l < 2)
		return ;
	l = 0;
	while (base[l] != '\0')
	{
		if (base[l] == '+' || base[l] == '-')
			return ;
		i = l + 1;
		while (base[i] != '\0')
		{
			if (base[i] == base[l])
				return ;
			i++;
		}
		l++;
	}
	ft_base(nbr, base, l);
}
