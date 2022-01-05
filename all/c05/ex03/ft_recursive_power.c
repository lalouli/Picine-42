/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 10:09:06 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/16 11:04:27 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int	nb, int	power)
{
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
			if (power > 1)
				nb = nb * ft_recursive_power(nb, power - 1);
			return (nb);
		}
	}
	return (0);
}
