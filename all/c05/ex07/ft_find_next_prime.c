/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:24:29 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/17 15:49:18 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_prime(int	nb)
{
	long long	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i * i <= (long long)nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int	nb)
{
	if (nb >= 0)
	{
		while (ft_prime(nb) == 0)
			nb++;
		return (nb);
	}
	return (2);
}
