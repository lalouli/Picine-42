/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 14:17:48 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/16 15:14:18 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int	nb)
{
	int	i;

	while (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			return (0);
		if (nb == 2)
			return (1);
		i = nb;
		while (nb > 1 && i >= 3)
		{
			if (nb % (i - 1) == 0)
				return (0);
			i--;
		}
		return (1);
	}
	return (0);
}