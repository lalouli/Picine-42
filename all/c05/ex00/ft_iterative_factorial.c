/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:06:54 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/16 09:31:45 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int	nb)
{
	int	i ;

	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			i = 1;
		if (nb > 1)
		{
			i = nb;
			while (nb != 1)
			{
				i = i * (nb - 1);
				nb--;
			}	
		}
		return (i);
	}
	return (0);
}
