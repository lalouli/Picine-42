/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 09:22:39 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/16 10:32:49 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int	nb, int	power)
{
	int	i ;
	int	n ;

	if (power >= 0)
	{
		if (power == 0)
			return (1);
		if (power == 1)
			return (nb);
		if (power > 1)
		{
			n = nb ;
			i = 1;
			while (i != power)
			{
				nb = nb * n ;
				i++;
			}
			return (nb);
		}
	}
	return (0);
}
