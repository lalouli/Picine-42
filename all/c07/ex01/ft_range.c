/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:35:59 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/22 12:10:29 by hlalouli         ###   ########.fr       */
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
