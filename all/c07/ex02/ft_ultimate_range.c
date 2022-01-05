/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 11:52:27 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/22 12:23:40 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	i;
	int	*k;

	i = 0;
	if (min >= max)
		return (0);
	k = malloc(sizeof(int) * (max - min));
	while (max > min)
	{
		k[i] = min;
		min++;
		i++;
	}
	return (k);
}

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	*range = ft_range(min, max);
	if (max > min)
		return (max - min);
	return (0);
}
