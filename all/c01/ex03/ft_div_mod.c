/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 14:46:53 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/09 09:30:36 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	if (b != 0)
	{
		*div = a / b ;
		*mod = a % b ;
	}
}
