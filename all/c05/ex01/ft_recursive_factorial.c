/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 08:42:51 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/16 10:59:19 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int	nb)
{
	int	i ;

	if (nb >= 0)
	{
		if (nb == 0 || nb == 1)
			i = 1;
		if (nb > 1)
		{
			i = nb;
			if (nb != 1)
			{
				i = i * ft_recursive_factorial(nb - 1 );
			}
		}	
		return (i);
	}
	return (0);
}
